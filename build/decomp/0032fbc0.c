// OoT3D decomp @ 0032fbc0  name=FUN_0032fbc0  size=496

undefined4 FUN_0032fbc0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  short sVar10;
  int iVar11;
  short *psVar12;
  bool bVar13;

  sVar10 = *(short *)(param_2 + 0x82) - *(short *)(param_2 + 0xbe);
  if (sVar10 < 0) {
    sVar10 = -sVar10;
  }
  iVar11 = FUN_0035b950(DAT_0032fdb8,param_1,param_2,DAT_0032fdb4,DAT_0032fdb0,
                        (int)*(short *)(param_2 + 0xbe));
  uVar9 = DAT_0032fdd8;
  uVar8 = DAT_0032fdd4;
  uVar7 = DAT_0032fdd0;
  uVar6 = DAT_0032fdcc;
  uVar5 = DAT_0032fdc8;
  uVar4 = DAT_0032fdc4;
  uVar3 = DAT_0032fdc0;
  iVar2 = DAT_0032fdbc;
  if (iVar11 == 0) {
    psVar12 = (short *)FUN_00369334(DAT_0032fdec,param_1,param_2,0xffffffff,3);
    if (psVar12 == (short *)0x0) {
      return 0;
    }
    *(undefined2 *)(param_2 + 0x36) = *(undefined2 *)(param_2 + 0x92);
    *(undefined2 *)(param_2 + 0xbe) = *(undefined2 *)(param_2 + 0x92);
    bVar13 = (*(ushort *)(param_2 + 0x90) & 8) != 0;
    uVar1 = *(ushort *)(param_2 + 0x90) & 8;
    if (bVar13) {
      uVar1 = DAT_0032fdf0;
    }
    if (bVar13 && (int)sVar10 < (int)uVar1) {
      if (*psVar12 == 0xda) goto LAB_0032fd60;
    }
    else {
      if (*psVar12 != 0xda) goto LAB_0032fcb4;
LAB_0032fd60:
      iVar11 = FUN_003306c4(param_2,psVar12);
      if ((iVar11 < iVar2) &&
         ((short)((*(short *)(param_2 + 0xbe) - psVar12[0x1b]) + -0x8000) < 16000))
      goto LAB_0032fca0;
    }
    FUN_003170f4(DAT_0032fdf4,param_2);
  }
  else {
    *(undefined2 *)(param_2 + 0x36) = *(undefined2 *)(param_2 + 0x92);
    *(undefined2 *)(param_2 + 0xbe) = *(undefined2 *)(param_2 + 0x92);
    if (((((*(ushort *)(param_2 + 0x90) & 8) == 0) || (DAT_0032fddc < (int)sVar10 + 11999U)) ||
        (iVar2 <= *(int *)(param_2 + 0x98))) &&
       ((DAT_0032fde0 <= *(int *)(param_2 + 0x98) || ((*(uint *)(DAT_0032fde4 + param_1) & 1) == 0))
       )) {
LAB_0032fcb4:
      FUN_00375c08(uVar6,uVar5,uVar4,uVar3,param_2 + 0x1a4,2);
      *(undefined4 *)(param_2 + 100) = uVar7;
      *(undefined4 *)(param_2 + 0xa50) = 1;
      *(undefined4 *)(param_2 + 0xa5c) = 0;
      *(undefined4 *)(param_2 + 0x6c) = uVar8;
      *(undefined4 *)(param_2 + 0xa48) = 0xb;
      FUN_00375bcc(param_2,uVar9);
      *(undefined4 *)(param_2 + 0xa54) = DAT_0032fde8;
      return 1;
    }
LAB_0032fca0:
    FUN_00328d50(param_2);
  }
  return 1;
}
