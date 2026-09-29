// OoT3D decomp @ 003edecc  name=FUN_003edecc  size=420

void FUN_003edecc(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;

  uVar8 = DAT_003ee0bc;
  FUN_00376340(DAT_003ee0c0,DAT_003ee0c0,DAT_003ee0bc,param_2,param_1,5);
  FUN_00376864(param_1);
  puVar1 = DAT_003ee0c8;
  iVar5 = DAT_003ee0c4;
  if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
    if (((*(uint *)(DAT_003ee0c4 + 8) & 1) == 0) &&
       (iVar4 = FUN_003679b4(DAT_003ee0c4 + 8), uVar7 = DAT_003ee0cc, iVar4 != 0)) {
      *puVar1 = uVar8;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
    }
    puVar2 = DAT_003ee0d0;
    uVar6 = *(uint *)(iVar5 + 4);
    if (((*(uint *)(iVar5 + 4) & 1) == 0) &&
       (iVar5 = FUN_003679b4(DAT_003ee0d4), uVar7 = DAT_003ee0d8, uVar3 = DAT_003ee0d4, uVar6 = 0,
       iVar5 != 0)) {
      *puVar2 = uVar8;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      uVar6 = uVar3;
    }
    uVar8 = DAT_003ee0dc;
    uVar7 = FUN_003738a8(DAT_003ee0dc,uVar6);
    *puVar1 = uVar7;
    uVar8 = FUN_003738a8(uVar8);
    puVar1[2] = uVar8;
    uVar8 = DAT_003ee0e8;
    puVar1[1] = DAT_003ee0e0;
    puVar2[1] = DAT_003ee0e4;
    FUN_003738a8(uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x400;
  iVar5 = FUN_00371e40(param_1,param_2);
  if (iVar5 != 0) {
    if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 1) {
      *(ushort *)(DAT_003ee0f8 + 0xf2) = *(ushort *)(DAT_003ee0f8 + 0xf2) | 2;
      FUN_00375c10(param_2,0xb);
    }
    FUN_00374428(param_1);
    return;
  }
  FUN_003724dc(DAT_003ee104,DAT_003ee100,param_1,param_2,(int)*(short *)(DAT_003ee0fc + param_1));
  return;
}
