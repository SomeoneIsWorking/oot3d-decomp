// OoT3D decomp @ 0038c110  name=FUN_0038c110  size=792

void FUN_0038c110(int param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  short sVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  uint in_fpscr;
  float fVar15;
  undefined4 uVar16;

  iVar13 = *(int *)(param_1 + 0x124);
  FUN_0031cb28();
  iVar4 = iRam0038c4e4;
  uVar3 = uRam0038c4e0;
  uVar16 = uRam0038c4dc;
  uVar7 = uRam0038c4d8;
  if (*(char *)(param_1 + 0xf94) != '\0') {
    uVar7 = FUN_0036ae14(param_1 + 0x1a4,7);
    *(undefined1 *)(param_1 + 0xf94) = 0;
    VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0(uVar7);
  }
  FUN_00375a18(param_1 + 0xffa,(int)(short)(*(short *)(iRam0038c4f4 + iVar13) * -3),1,0x4b0,0);
  if ((*(char *)(param_1 + 0x1205) != '\0') &&
     (cVar1 = *(char *)(param_1 + 0x1205) + -1, *(char *)(param_1 + 0x1205) = cVar1, cVar1 == '\0'))
  {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  if ((*(char *)(param_1 + 0x1206) != '\0') &&
     (cVar1 = *(char *)(param_1 + 0x1206) + -1, *(char *)(param_1 + 0x1206) = cVar1, cVar1 == '\0'))
  {
    FUN_0031ca6c(1,0);
  }
  iVar13 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar13 != 0) {
    uVar8 = FUN_0036ae14(param_1 + 0x1a4,8);
    uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar16,uVar3,uVar8,uVar3,param_1 + 0x1a4,8,1);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  if (*(int *)(param_1 + 0xf9c) == 0) {
    if (*(char *)(iVar4 + 9) < '\x0e') {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
LAB_0038c700:
    FUN_0036e168(uVar3,uRam0038c4f8,uRam0038c894,uRam0038c890,param_1 + 0x1e4);
  }
  else if ('\r' < *(char *)(iVar4 + 9)) goto LAB_0038c700;
  puVar5 = puRam0038c898;
  cVar1 = *(char *)(iVar4 + 9);
  if (cVar1 == '\x13') {
    puVar11 = puRam0038c898 + -6;
    puVar14 = puRam0038c898 + 1;
    uVar8 = puRam0038c898[2];
    puVar12 = puRam0038c898 + 3;
    puVar9 = puRam0038c898 + -3;
    *puVar11 = *puRam0038c898;
    puVar5[-5] = *puVar14;
    puVar5[-4] = uVar8;
    uVar8 = puVar5[4];
    uVar10 = puVar5[5];
    *puVar9 = *puVar12;
    puVar5[-2] = uVar8;
    puVar5[-1] = uVar10;
    FUN_0036e168(*puVar12,uVar16,uVar7,uVar3,puVar11);
    FUN_0036e168(puVar5[5],uVar16,uVar7,uVar3,puVar5 + -4);
    puVar5[-5] = (float)puVar5[-5] + fRam0038c89c;
    *(char *)(iVar4 + 9) = *(char *)(iVar4 + 9) + '\x01';
  }
  else if ((cVar1 != '\x14' && cVar1 != '\x15') && cVar1 != '\x16') goto LAB_0038c8cc;
  uVar7 = uRam0038c8a4;
  if (*(char *)(param_1 + 0xf95) == '\0') {
    lVar2 = (ulonglong)*(uint *)(param_2 + 0x5bf4) * (ulonglong)uRam0038c8a0;
    iVar13 = (uint)((ulonglong)lVar2 >> 0x21) * -3;
    if (*(uint *)(param_2 + 0x5bf4) + iVar13 == 0) {
      fVar15 = (float)FUN_003738a8(uRam0038c8a4,0,iVar13,(int)lVar2);
      uVar16 = VectorSignedToFloat(((int)*(short *)(param_1 + 4000) >> 3) + 1,
                                   (byte)(in_fpscr >> 0x15) & 3);
      FUN_0031c7d4(uRam0038c8a8,uVar7,uVar16,param_2,param_1,1,(int)(short)((short)(int)fVar15 + 6),
                   2,1);
    }
    sVar6 = *(short *)(param_1 + 4000) + 1;
    *(short *)(param_1 + 4000) = sVar6;
    uVar7 = uRam0038c8ac;
    if (0x2f < sVar6) {
      *(char *)(param_1 + 0xf95) = *(char *)(param_1 + 0xf95) + '\x01';
      *(undefined1 *)(param_1 + 0xf98) = 1;
      FUN_00375bcc(param_1,uVar7);
      if (*(short *)(param_1 + 0x1c) == 2) {
        *(char *)(iVar4 + 9) = *(char *)(iVar4 + 9) + '\x01';
      }
    }
  }
  else {
    sVar6 = *(short *)(param_1 + 4000) + -1;
    *(short *)(param_1 + 4000) = sVar6;
    if (sVar6 == 0) {
      FUN_00374428(param_1);
    }
  }
LAB_0038c8cc:
  *(int *)(param_1 + 0xf9c) = *(int *)(param_1 + 0xf9c) + -1;
  return;
}
