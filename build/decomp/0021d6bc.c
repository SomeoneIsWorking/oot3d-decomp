// OoT3D decomp @ 0021d6bc  name=FUN_0021d6bc  size=16

void FUN_0021d6bc(uint param_1,int param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  undefined4 uVar8;
  uint in_fpscr;

  iVar3 = FUN_00363c10(param_2 + 0x3a58,uRam0021d7ec);
  psVar7 = *(short **)(iRam0021d7f0 + param_2);
  uVar4 = 0;
  *(undefined1 *)(param_1 + 0x1240) = 0;
  if (psVar7 != (short *)0x0) {
    do {
      if (*psVar7 == iRam0021d7f4) {
        uVar6 = *(undefined4 *)(psVar7 + 6);
        uVar8 = *(undefined4 *)(psVar7 + 8);
        iVar3 = param_1 + *(char *)(param_1 + 0x1240) * 0xc;
        *(undefined4 *)(iVar3 + 0x10b0) = *(undefined4 *)(psVar7 + 4);
        *(undefined4 *)(iVar3 + 0x10b4) = uVar6;
        *(undefined4 *)(iVar3 + 0x10b8) = uVar8;
        FUN_0035fb94(param_1 + *(char *)(param_1 + 0x1240) * 6 + 0x11a0,psVar7 + 10);
        uVar1 = psVar7[0xe];
        *(ushort *)(param_1 + *(char *)(param_1 + 0x1240) * 2 + 0x1218) = uVar1;
        puVar2 = DAT_0021cebc;
        iVar3 = (int)(((uint)uVar1 << 0x11) >> 0x1a) >> 4;
        uVar8 = FUN_0036ae14(iVar3 + 0x2fc,*DAT_0021cebc);
        uVar6 = DAT_0021cec4;
        *(short *)(DAT_0021cec0 + iVar3) = (short)uVar8;
        uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(DAT_0021cec8,DAT_0021cec8,uVar8,uVar6,iVar3 + 0x2fc,*puVar2,2);
        uVar6 = DAT_0021ced0;
        *(undefined4 *)(iVar3 + 0x338) = DAT_0021cecc;
        *(undefined4 *)(iVar3 + 0x1a4) = uVar6;
        return;
      }
      uVar4 = (uint)*(byte *)(param_1 + 0x1240);
      if (uVar4 != 0x14) {
        psVar7 = *(short **)(psVar7 + 0x98);
      }
    } while (uVar4 != 0x14 && psVar7 != (short *)0x0);
  }
  if (iVar3 < 0) {
    uVar4 = param_1;
  }
  *(undefined1 *)(param_1 + 0x1241) = 1;
  if (iVar3 < 0) {
    *(undefined4 *)(uVar4 + 0x140) = 0;
    *(undefined4 *)(uVar4 + 0x13c) = 0;
    *(uint *)(uVar4 + 4) = *(uint *)(uVar4 + 4) & 0xfffffffe;
    return;
  }
  iVar5 = FUN_00373074(param_2 + 0x3a58,iVar3);
  uVar6 = uRam0021d800;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0xac0) = uRam0021d7f8;
    return;
  }
  *(undefined4 *)(param_1 + 0xac0) = uRam0021d7fc;
  *(undefined1 *)(param_1 + 0xac4) = 1;
  *(int *)(param_1 + 0x1a4) = iVar3;
  FUN_0035302c(DAT_00370370,DAT_00370374,DAT_00370374,uVar6,param_1 + 0x1a8,10,0);
  return;
}
