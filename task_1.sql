/* 1. List all courses.name and teachers.name.*/
select courses.name, teachers.name from courses right join teachers on courses.teacher_id = teachers.id;

/* 2. List teachers who take the highest number of courses.*/
select distinct t.name from teachers t where t.id in (select c.teacher_id from courses c group by c.teacher_id 
having count(*) >= ALL(Select count(*) from courses c1 group by c1.teacher_id));

/* 3. List teachers who don't take any course. */
select * from teachers 
where not exists 
(select 1 from courses where courses.teacher_id = teachers.id );
