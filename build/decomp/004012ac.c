// OoT3D decomp @ 004012ac  name=FUN_004012ac  size=64

int * FUN_004012ac(int *param_1)

{
  if (param_1[1] != 0) {
    software_interrupt(0x23);
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}
