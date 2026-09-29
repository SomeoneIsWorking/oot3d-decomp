// OoT3D decomp @ 0011a014  name=FUN_0011a014  size=424

void FUN_0011a014(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  float fVar8;

  iVar4 = *(int *)(DAT_0011a1bc + param_2);
  FUN_003731e0(param_1 + 0x1a4);
  sVar2 = *(short *)(param_1 + 0x236) + 0x60;
  *(short *)(param_1 + 0x236) = sVar2;
  iVar3 = (int)sVar2;
  if ((int)*(short *)(param_1 + 0x238) < (int)sVar2) {
    iVar3 = (int)*(short *)(param_1 + 0x238);
  }
  *(short *)(param_1 + 0x236) = (short)iVar3;
  iVar3 = FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x240),4,iVar3,0x10);
  if (iVar3 == 0) {
    *(byte *)(param_1 + 0xefe) = *(byte *)(param_1 + 0xefe) & 0xfb;
    FUN_003672b8(param_1);
  }
  else if ((*(byte *)(param_1 + 0xefc) & 2) != 0) {
    *(byte *)(param_1 + 0xefc) = *(byte *)(param_1 + 0xefc) & 0xfc;
    *(undefined1 *)(param_1 + 0x231) = 1;
    FUN_00374bb8(DAT_0011a1c4,DAT_0011a1c0,param_2,param_1,
                 (int)(short)(*(short *)(param_1 + 0xbe) +
                             (ushort)*(byte *)(param_1 + 0x230) * -0x3800));
    FUN_0036f59c(iVar4,DAT_0011a1c8);
    sVar2 = *(short *)(param_1 + 0xbe) + *(char *)(param_1 + 0x230) * -0x1400;
    if (0 < (int)(short)(sVar2 - *(short *)(param_1 + 0x240)) *
            (int)(short)*(char *)(param_1 + 0x230)) {
      *(short *)(param_1 + 0x240) = sVar2;
    }
  }
  if (*(char *)(param_1 + 0x231) == '\0') {
    iVar7 = *(int *)(iVar4 + 0x1354);
    bVar6 = SBORROW4(iVar7,DAT_0011a1cc);
    iVar3 = iVar7 - DAT_0011a1cc;
    bVar5 = iVar7 == DAT_0011a1cc;
    if (iVar7 <= DAT_0011a1cc) {
      iVar4 = *(int *)(iVar4 + 0x2c);
      bVar6 = SBORROW4(iVar4,0x3f800000);
      iVar3 = iVar4 + -0x3f800000;
      bVar5 = iVar4 == 0x3f800000;
    }
    if (!bVar5 && iVar3 < 0 == bVar6) {
      *(byte *)(param_1 + 0xefc) = *(byte *)(param_1 + 0xefc) | 1;
      bVar1 = *(byte *)(param_1 + 0xefe) & 0xfb;
      goto LAB_0011a174;
    }
  }
  *(byte *)(param_1 + 0xefc) = *(byte *)(param_1 + 0xefc) & 0xfe;
  bVar1 = *(byte *)(param_1 + 0xefe) | 4;
LAB_0011a174:
  *(byte *)(param_1 + 0xefe) = bVar1;
  fVar8 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  iVar3 = DAT_0011a1d0;
  *(float *)(param_1 + 0x28) =
       *(float *)(*(int *)(DAT_0011a1d0 + 0x30) + 0x28) + *(float *)(param_1 + 0xedc) * fVar8;
  fVar8 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  *(float *)(param_1 + 0x30) =
       *(float *)(*(int *)(iVar3 + 0x30) + 0x30) + *(float *)(param_1 + 0xedc) * fVar8;
  return;
}
