// OoT3D decomp @ 002c31ac  name=FUN_002c31ac  size=336

undefined4
FUN_002c31ac(undefined4 *param_1,int *param_2,undefined1 *param_3,int param_4,undefined4 *param_5,
            int *param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined4 uStack_28;

  if (param_7 == 0) {
    FUN_0030b304(DAT_002c32fc);
  }
  else {
    iVar1 = FUN_0030b3ac();
    if (iVar1 == 0) {
      return DAT_002c3300;
    }
  }
  iVar1 = DAT_002c3304;
  if (*(int *)(DAT_002c3304 + 0x2c) == 0) {
    if (param_1 == (undefined4 *)0x0) {
      param_1 = &uStack_28;
    }
    if (param_2 == (int *)0x0) {
      param_2 = &iStack_2c;
    }
    if (param_3 == (undefined1 *)0x0) {
      param_4 = 0;
    }
    if (param_4 == 0) {
      param_3 = auStack_30;
    }
    if (param_5 == (undefined4 *)0x0) {
      param_5 = &uStack_34;
    }
    if (param_6 == (int *)0x0) {
      param_6 = &local_38;
    }
    local_38 = 0;
    FUN_0030db4c();
    FUN_0030dab0();
    uVar4 = FUN_00493e80(param_1,*(undefined4 *)(iVar1 + 0x9c),param_2,param_3,param_4,param_5,
                         param_6);
    FUN_0030da40();
    software_interrupt(0x14);
    uVar3 = *DAT_002c3308 >> 0x1b;
    if ((*DAT_002c3308 & 0x80000000) != 0) {
      uVar3 = uVar3 - 0x20;
    }
    if ((uVar3 != 0xfffffff9 && uVar3 != 0) && uVar3 != 1) {
      FUN_003351b4();
    }
    if (local_38 != 0) {
      software_interrupt(0x23);
    }
  }
  else {
    *param_2 = *(int *)(DAT_002c3304 + 0x2c);
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    iVar2 = FUN_0031007c(iVar1 + 0x34);
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (int *)0x0) {
      iVar2 = *(int *)(iVar1 + 0x98);
    }
    uVar4 = 0;
    if (param_6 != (int *)0x0) {
      *param_6 = iVar2;
    }
  }
  FUN_0031007c(DAT_002c32fc);
  return uVar4;
}
