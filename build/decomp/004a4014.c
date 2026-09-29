// OoT3D decomp @ 004a4014  name=FUN_004a4014  size=52

int FUN_004a4014(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 local_8;

  local_8 = in_r3;
  iVar1 = FUN_004bb390(&local_8);
  if (iVar1 < 0) {
    FUN_0030e3ac(iVar1,&DAT_004a4048,0,&DAT_004a4048);
    FUN_002fb928(0);
  }
  return (int)(char)local_8;
}
