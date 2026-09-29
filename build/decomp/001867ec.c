// OoT3D decomp @ 001867ec  name=FUN_001867ec  size=356

undefined4 FUN_001867ec(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  bool bVar4;

  uVar1 = *(uint *)(param_1 + 0x1710);
  bVar4 = (uVar1 & 0x800) != 0;
  if (bVar4) {
    uVar1 = *(uint *)(param_1 + 0x1224);
  }
  if ((bVar4 && uVar1 != 0) &&
     ((((*(uint *)(*(int *)(param_1 + 0x29c8) + 4) &
        (*DAT_00186950 | *DAT_00186954 | *DAT_00186958 | *DAT_0018695c | 0x2000)) != 0 ||
       (iVar2 = FUN_00349504(), iVar2 != 0)) || (iVar2 = FUN_003494f4(), iVar2 != 0)))) {
    iVar2 = DAT_00186964;
    psVar3 = *(short **)(param_1 + 0x1224);
    if (psVar3 == (short *)0x0) {
      FUN_0036b0fc(param_2,param_1);
      FUN_0036b02c(param_2,param_1);
      FUN_0036b2d4(DAT_00186960,param_1,param_2);
    }
    else if (((*(uint *)(psVar3 + 2) & 0x800000) == 0) &&
            ((*(int *)(param_1 + 0x221c) < DAT_00186968 || (*psVar3 == 0xda)))) {
      FUN_0036055c(param_2,param_1,DAT_0018696c,1);
      FUN_003604f0(param_1 + 0x254,param_2,
                   *(undefined4 *)(iVar2 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x390));
    }
    else {
      FUN_0036055c(param_2,param_1,DAT_00186970,1);
      FUN_003604f0(param_1 + 0x254,param_2,
                   *(undefined4 *)(iVar2 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x378));
    }
    return 1;
  }
  return 0;
}
