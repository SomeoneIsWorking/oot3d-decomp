// OoT3D decomp @ 001e0028  name=FUN_001e0028  size=172

void FUN_001e0028(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  iVar2 = DAT_001e00d8;
  iVar1 = DAT_001e00d4;
  uVar3 = *(uint *)(param_1 + 0x558);
  if ((uVar3 < 3) && (*(int *)(DAT_001e00d4 + uVar3 * 4) != 0)) {
    FUN_0035e3a4(param_1 + 0x228,0,*(undefined1 *)(DAT_001e00d8 + *(short *)(param_1 + 0x548)));
    FUN_0035e3a4(param_1 + 0x228,2,*(undefined1 *)(iVar2 + *(short *)(param_1 + 0x54c)));
    FUN_0035e3a4(param_1 + 0x228,1,*(undefined1 *)(iVar2 + -3 + (int)*(short *)(param_1 + 0x550)));
    FUN_0035e330(param_1 + 0x228);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),7);
    FUN_0033ce74(*(undefined4 *)(DAT_001e00dc + param_2),0x14);
                    /* WARNING: Could not recover jumptable at 0x001e00cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + uVar3 * 4))(param_1,param_2);
    return;
  }
  return;
}
