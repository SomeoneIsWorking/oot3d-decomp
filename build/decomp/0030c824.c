// OoT3D decomp @ 0030c824  name=FUN_0030c824  size=152

void FUN_0030c824(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int local_18;
  undefined1 auStack_14 [4];

  if (*(char *)((int)param_1 + 0x15) != '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    FUN_0030c8bc();
    FUN_00306e2c();
    local_18 = *param_1;
    uVar1 = FUN_0030dbd4(auStack_14,&local_18,1,0,0xffffffff,0xffffffff);
    uVar2 = uVar1 >> 0x1b;
    if ((uVar1 & 0x80000000) != 0) {
      uVar2 = uVar2 - 0x20;
    }
    if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
      FUN_003351b4();
    }
    *(undefined1 *)(param_1 + 1) = 1;
    if (*param_1 != 0) {
      software_interrupt(0x23);
      *param_1 = 0;
    }
    param_1[4] = -1;
    *(undefined1 *)((int)param_1 + 0x15) = 0;
  }
  return;
}
