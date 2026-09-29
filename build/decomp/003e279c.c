// OoT3D decomp @ 003e279c  name=FUN_003e279c  size=212

void FUN_003e279c(int param_1,int param_2)

{
  int iVar1;

  FUN_00370378(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),0x100);
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar1 == 5) {
    iVar1 = FUN_00346964(param_2);
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 0xb1c) == '\0') {
        FUN_003462ac(param_2,param_1,0x2d);
      }
      else {
        FUN_003462ac(param_2,param_1,0x2e);
      }
      *(undefined2 *)(param_1 + 0xb24) = *(undefined2 *)(DAT_003e2870 + param_1);
      FUN_0036be34(param_2);
    }
  }
  else {
    iVar1 = FUN_00369a48(param_1,param_2);
    if (iVar1 != 0) {
      *(undefined2 *)(DAT_003e2874 + 0x5e) = 0;
      *(undefined2 *)(param_1 + 0xb1e) = 0;
      *(undefined4 *)(param_1 + 0xb18) = DAT_003e2878;
    }
  }
  FUN_00373264(param_1,DAT_003e287c);
  return;
}
