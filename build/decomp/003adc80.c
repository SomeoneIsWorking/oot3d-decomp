// OoT3D decomp @ 003adc80  name=FUN_003adc80  size=468

int FUN_003adc80(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;

  fVar1 = fRam003ade60;
  piVar5 = piRam003ade5c;
  iVar6 = *(int *)(iRam003ade54 + param_2);
  iVar3 = iRam003ade58;
  if ((*(uint *)(param_1 + 4) & 0x2000) == 0) {
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piRam003ade5c + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    FUN_0036e168(uRam003ade70,fVar7 * fRam003ade60 * fRam003ade64,uRam003ade6c,uRam003ade68,
                 param_1 + 0x54);
    FUN_0037572c(*(undefined4 *)(param_1 + 0x54),param_1);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    *(short *)(param_1 + 0xbe) = (short)(int)(fVar7 + fVar8 * fVar1 * fRam003ade74);
    iVar3 = FUN_0036a7a0(param_2);
    if (iVar3 != 0) {
      return iVar3;
    }
    if ((*(byte *)(param_1 + 0x1b9) & 2) != 0) {
      *(byte *)(param_1 + 0x1b9) = *(byte *)(param_1 + 0x1b9) & 0xfd;
    }
    if ((*(byte *)(param_1 + 0x1bb) & 1) == 0) {
      FUN_0037632c(param_1,param_1 + 0x1a8);
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
      piVar5 = (int *)(param_1 + 0x1a8);
      iVar3 = FUN_00366738();
      if (iVar3 != 1) {
        (**(code **)(DAT_00376328 + (uint)*(byte *)(param_1 + 0x1bd) * 4))(param_2,piVar5);
        if ((((*piVar5 == 0) || (*(int *)(*piVar5 + 0x13c) != 0)) &&
            (iVar3 = *(int *)(param_2 + 0x5e38), iVar3 < 0x32)) &&
           ((*(ushort *)(param_2 + 0x5c7a) & 1) == 0)) {
          *(int **)(param_2 + 0x5c78 + iVar3 * 4 + 0x1c4) = piVar5;
          *(int *)(param_2 + 0x5e38) = *(int *)(param_2 + 0x5e38) + 1;
          return iVar3;
        }
      }
      return -1;
    }
    *(byte *)(param_1 + 0x1bb) = *(byte *)(param_1 + 0x1bb) & 0xfe;
    FUN_00376a78(param_2,0x71);
    fVar1 = fRam003ade80;
    iVar2 = iRam003ade7c;
    uVar4 = (uint)*(short *)(param_1 + 0x1c);
    iVar3 = ((int)uVar4 >> 8 & 0x1cU) + iRam003ade7c;
    *(uint *)(iVar3 + 0xeb4) =
         (uVar4 & 0xff) << (*(uint *)(iRam003ade78 + (uVar4 >> 6 & 0xc)) & 0xff) |
         *(uint *)(iVar3 + 0xeb4);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    *(short *)(iVar6 + 0x118) = (short)(int)(fVar1 / fVar7 + fRam003ade84);
    FUN_00367c7c(param_2,0xb4,0);
    iVar3 = iRam003ade90;
    if ((*(short *)(iVar2 + 0x44) != 0) && (*(short *)(iRam003ade88 + param_2) == 0)) {
      FUN_0035c528(uRam003ade8c);
      iVar3 = iRam003ade90;
    }
  }
  *(int *)(param_1 + 0x1a4) = iVar3;
  return iVar3;
}
