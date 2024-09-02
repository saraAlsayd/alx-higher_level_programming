-- creates the table unique_id on your MySQL server.
  -- unique_id description:
    -- id INT with the default value 1 and must be unique
    -- name VARCHAR(256)
  -- database name will be passed as an argument of the mysql command
  -- If the table id_not_null already exists, your script should not fail

CREATE TABLE IF NOT EXISTS id_not_null (id INT DEFAULT 1, name VARCHAR(256));
