// OoT3D decomp @ 002c12d4  name=FUN_002c12d4  size=356

void FUN_002c12d4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_18;
  undefined1 auStack_14 [4];

  if (param_1[0x10] != 0) {
    software_interrupt(0x18);
    uVar2 = (uint)param_1[0x16] >> 0x1b;
    if ((param_1[0x16] & 0x80000000) != 0) {
      uVar2 = uVar2 - 0x20;
    }
    if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
      FUN_003351b4();
    }
    local_18 = param_1[0xe];
    uVar1 = FUN_0030dbd4(auStack_14,&local_18,1,0,0xffffffff,0xffffffff);
    uVar2 = uVar1 >> 0x1b;
    if ((uVar1 & 0x80000000) != 0) {
      uVar2 = uVar2 - 0x20;
    }
    if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
      FUN_003351b4();
    }
    *(undefined1 *)(param_1 + 0xf) = 1;
    if (param_1[0xe] != 0) {
      software_interrupt(0x23);
      param_1[0xe] = 0;
    }
    param_1[0x14] = 0xffffffff;
    if (param_1[0x15] != 0) {
      software_interrupt(0x23);
      param_1[0x15] = 0;
    }
    if (param_1[0x16] != 0) {
      software_interrupt(0x23);
      param_1[0x16] = 0;
    }
    if (param_1[0x19] != 0) {
      (**(code **)(*(int *)param_1[0x11] + 0x10))();
      param_1[0x19] = 0;
    }
    if (param_1[10] != 0) {
      (**(code **)(*(int *)param_1[0x11] + 0x10))();
      param_1[10] = 0;
    }
    if (param_1[0xb] != 0) {
      (**(code **)(*(int *)param_1[0x11] + 0x10))();
      param_1[0xb] = 0;
    }
    param_1[0xc] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  return;
}
