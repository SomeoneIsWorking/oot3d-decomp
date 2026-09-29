// OoT3D decomp @ 00218e94  name=FUN_00218e94  size=380

void FUN_00218e94(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;

  FUN_0036b4ec(param_2 + 0x254,param_1);
  iVar3 = DAT_00219018;
  uVar2 = DAT_00219014;
  uVar1 = DAT_00219010;
  iVar4 = *(int *)(param_2 + 0x284);
  if (iVar4 != 0x89) {
    if ((*(ushort *)(param_2 + 0x90) & 1) == 0) {
      if (iVar4 != 0x22c) {
        uVar6 = FUN_003603c0(param_2 + 0x254,0x22c);
        uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00360190(uVar2,uVar1,uVar6,DAT_00219028,param_2 + 0x254,param_1,0x22c,0);
        return;
      }
    }
    else if ((iVar4 != DAT_00219018) || (iVar4 = FUN_0036b4ec(param_2 + 0x254,param_1), iVar4 != 0))
    {
      uVar6 = 0;
      if (((*(uint *)(param_2 + 0x29b8) & 0x200) == 0) &&
         (((*(char *)(DAT_00219020 + param_2) != '\x01' || (*DAT_00219024 < 'Q')) ||
          ((*(uint *)(param_2 + 0x29b8) & 0x400) != 0)))) {
        iVar4 = *(int *)(DAT_0021901c + (uint)*(byte *)(param_2 + 0x1b3) * 4 + 0x4e0);
      }
      else {
        iVar4 = *(int *)(DAT_0021901c + (uint)*(byte *)(param_2 + 0x1b3) * 4 + 0x4f8);
      }
      if (*(int *)(param_2 + 0x284) == 0x22c) {
        uVar6 = 2;
        iVar4 = iVar3;
      }
      else if (*(int *)(param_2 + 0x284) == iVar4) {
        return;
      }
      FUN_00334d6c(param_2);
      uVar5 = FUN_003603c0(param_2 + 0x254,iVar4);
      uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00360190(uVar2,uVar1,uVar5,uVar1,param_2 + 0x254,param_1,iVar4,uVar6);
      *(undefined4 *)(param_2 + 0x6c) = uVar1;
      *(undefined4 *)(param_2 + 0x221c) = uVar1;
      if (iVar4 == iVar3) {
        FUN_0034bd3c(param_2);
        return;
      }
    }
  }
  return;
}
