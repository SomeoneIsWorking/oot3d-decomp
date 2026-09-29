// OoT3D decomp @ 00497378  name=FUN_00497378  size=540

undefined4 FUN_00497378(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;

  iVar2 = (**(code **)(*param_3 + 8))(param_3,0x80000);
  param_1[10] = iVar2;
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*param_3 + 8))(param_3,0x1000);
    param_1[0x19] = iVar2;
    if (iVar2 != 0) {
      param_1[0x10] = param_2;
      uVar3 = (**(code **)(*param_2 + 0x24))(param_2);
      param_1[6] = uVar3;
      param_1[7] = 0;
      param_1[0x11] = param_3;
      *param_1 = param_4;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      do {
        bVar1 = (bool)hasExclusiveAccess(param_1 + 0x12);
      } while (!bVar1);
      param_1[0x12] = 1;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      local_1c = (undefined4 *)0x0;
      uVar4 = FUN_0030dd64(&local_1c,0);
      if (-1 < (int)uVar4) {
        param_1[0x15] = local_1c;
        uVar4 = 0;
      }
      uVar5 = uVar4 >> 0x1b;
      if ((uVar4 & 0x80000000) != 0) {
        uVar5 = uVar5 - 0x20;
      }
      if ((uVar5 != 0xfffffff9 && uVar5 != 0) && uVar5 != 1) {
        FUN_003351b4();
      }
      local_1c = (undefined4 *)0x0;
      uVar4 = FUN_0030dd64(&local_1c,0);
      if (-1 < (int)uVar4) {
        param_1[0x16] = local_1c;
        uVar4 = 0;
      }
      uVar5 = uVar4 >> 0x1b;
      if ((uVar4 & 0x80000000) != 0) {
        uVar5 = uVar5 - 0x20;
      }
      if ((uVar5 != 0xfffffff9 && uVar5 != 0) && uVar5 != 1) {
        FUN_003351b4();
      }
      param_1[0x17] = param_1 + 0x15;
      param_1[0x18] = param_1 + 0x16;
      local_2c = 4;
      local_28 = DAT_00497598;
      local_24 = DAT_0049759c;
      local_20 = DAT_004975a0;
      local_1c = param_1;
      uVar5 = FUN_0030dbf8(param_1 + 0xe,&local_2c,DAT_00497594,&local_1c,param_1[0x19] + 0x1000,4,
                           0xfffffffe,0);
      uVar4 = uVar5 >> 0x1b;
      if ((uVar5 & 0x80000000) != 0) {
        uVar4 = uVar4 - 0x20;
      }
      if ((uVar4 != 0xfffffff9 && uVar4 != 0) && uVar4 != 1) {
        FUN_003351b4();
      }
      software_interrupt(0x18);
      uVar4 = (uint)param_1[0x15] >> 0x1b;
      if ((param_1[0x15] & 0x80000000) != 0) {
        uVar4 = uVar4 - 0x20;
      }
      if ((uVar4 != 0xfffffff9 && uVar4 != 0) && uVar4 != 1) {
        FUN_003351b4();
      }
      return 1;
    }
    (**(code **)(*param_3 + 0x10))(param_3,param_1[10]);
    param_1[10] = 0;
  }
  return 0;
}
