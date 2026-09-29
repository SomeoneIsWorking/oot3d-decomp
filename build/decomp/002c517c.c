// OoT3D decomp @ 002c517c  name=FUN_002c517c  size=376

void FUN_002c517c(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [48];

  FUN_002c1ae8(param_1,param_1 + param_3 * 8 + 4,param_2);
  uVar1 = DAT_002c5308;
  if (param_3 < 0x12) {
    if (((*DAT_002c52f4 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_002c52f4), iVar4 != 0)) {
      FUN_0036788c(DAT_002c52f8);
    }
    iVar4 = *(int *)(DAT_002c52f8 + 0xfc);
                    /* WARNING: Could not recover jumptable at 0x002c5210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2,iVar4 + 0x114,iVar4 + 0x174,iVar4 + 0x30);
    return;
  }
  if (((*DAT_002c5304 & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_002c5304), puVar3 = DAT_002c5310, uVar2 = DAT_002c530c, iVar4 != 0))
  {
    *DAT_002c5310 = DAT_002c530c;
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    puVar3[3] = uVar1;
    puVar3[4] = uVar1;
    puVar3[5] = uVar2;
    puVar3[6] = uVar1;
    puVar3[7] = uVar1;
    puVar3[8] = uVar1;
    puVar3[9] = uVar1;
    puVar3[10] = uVar2;
    puVar3[0xb] = uVar1;
  }
  FUN_00372224(auStack_44,DAT_002c5310);
  local_50 = uVar1;
  local_4c = uVar1;
  local_48 = uVar1;
  (**(code **)(*param_2 + 8))(param_2,auStack_44,auStack_44,&local_50);
  return;
}
