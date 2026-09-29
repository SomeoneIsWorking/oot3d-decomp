// OoT3D decomp @ 0032a998  name=FUN_0032a998  size=1144

void FUN_0032a998(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  psVar5 = (short *)(param_1 + 0x1c4);
  iVar1 = *DAT_0032aca4;
  if (param_2 == 1) {
    uVar2 = *(ushort *)(iVar1 + 0x147a) + 0x8000 & 0xffff |
            (*(ushort *)(iVar1 + 0x147c) + 0x8000) * 0x10000;
    sVar3 = *(short *)(iVar1 + 0x147e) + -0x8000;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x1474),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar9 = fVar9 * DAT_0032aca8;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x1476),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar11 = DAT_0032acac + fVar10 * DAT_0032aca8;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x1478),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar10 = fVar10 * DAT_0032aca8;
  }
  else if (param_2 == 2) {
    uVar2 = *(ushort *)(iVar1 + 0x1486) + 0x8000 & 0xffff |
            (*(ushort *)(iVar1 + 0x1488) + 0x8000) * 0x10000;
    sVar3 = *(short *)(iVar1 + 0x148a) + -0x8000;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x1480),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar9 = fVar9 * DAT_0032aca8;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x1482),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar11 = DAT_0032acac + fVar10 * DAT_0032aca8;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x1484),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar10 = fVar10 * DAT_0032aca8;
  }
  else if (param_2 == 3) {
    uVar2 = *(ushort *)(iVar1 + 0x1492) + 0x8000 & 0xffff |
            (*(ushort *)(iVar1 + 0x1494) + 0x8000) * 0x10000;
    sVar3 = *(short *)(iVar1 + 0x1496) + -0x8000;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x148c),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar9 = fVar9 * DAT_0032aca8;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x148e),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar11 = DAT_0032acac + fVar10 * DAT_0032aca8;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x1490),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar10 = fVar10 * DAT_0032aca8;
  }
  else if (param_2 == 4) {
    uVar2 = *(ushort *)(iVar1 + 0x149e) + 0x8000 & 0xffff |
            (*(ushort *)(iVar1 + 0x14a0) + 0x8000) * 0x10000;
    sVar3 = *(short *)(iVar1 + 0x14a2) + -0x8000;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x1498),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar9 = fVar9 * DAT_0032aca8;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x149a),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar11 = DAT_0032acac + fVar10 * DAT_0032aca8;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x149c),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar10 = fVar10 * DAT_0032aca8;
  }
  else if (param_2 == 5) {
    uVar2 = *(ushort *)(iVar1 + 0x14aa) + 0x8000 & 0xffff |
            (*(ushort *)(iVar1 + 0x14ac) + 0x8000) * 0x10000;
    sVar3 = *(short *)(iVar1 + 0x14ae) + -0x8000;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x14a4),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar9 = fVar9 * DAT_0032aca8;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x14a6),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar11 = DAT_0032acac + fVar10 * DAT_0032aca8;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x14a8),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar10 = fVar10 * DAT_0032aca8;
  }
  else if (param_2 == 6) {
    uVar2 = *(ushort *)(iVar1 + 0x14b6) + 0x8000 & 0xffff |
            (*(ushort *)(iVar1 + 0x14b8) + 0x8000) * 0x10000;
    sVar3 = *(short *)(iVar1 + 0x14ba) + -0x8000;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x14b0),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar9 = fVar9 * DAT_0032aca8;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x14b2),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar11 = DAT_0032acac + fVar10 * DAT_0032aca8;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x14b4),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar10 = fVar10 * DAT_0032aca8;
  }
  else {
    iVar4 = *DAT_0032aca4;
    if (param_2 == 7) {
      uVar2 = *(ushort *)(iVar1 + 0x14fe) + 0x8000 & 0xffff |
              (*(ushort *)(iVar4 + 0x1500) + 0x8000) * 0x10000;
      sVar3 = *(short *)(iVar4 + 0x1502) + -0x8000;
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x14f8),
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar9 = fVar9 * DAT_0032aca8;
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x14fa),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar11 = DAT_0032acac + fVar10 * DAT_0032aca8;
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x14fc),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * DAT_0032aca8;
    }
    else {
      uVar2 = *(ushort *)(iVar4 + 0x150a) + 0x8000 & 0xffff |
              (*(ushort *)(iVar4 + 0x150c) + 0x8000) * 0x10000;
      sVar3 = *(short *)(iVar4 + 0x150e) + -0x8000;
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x1504),
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar9 = fVar9 * DAT_0032aca8;
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x1506),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar11 = DAT_0032acac + fVar10 * DAT_0032aca8;
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x1508),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * DAT_0032aca8;
    }
  }
  *psVar5 = *psVar5 + (short)uVar2;
  *(short *)(param_1 + 0x1c6) = *(short *)(param_1 + 0x1c6) + (short)(uVar2 >> 0x10);
  *(short *)(param_1 + 0x1c8) = *(short *)(param_1 + 0x1c8) + sVar3;
  fVar6 = (float)FUN_00338f60((int)*psVar5);
  fVar7 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x1c6));
  fVar8 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x1c8));
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar6 * fVar9;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar7 * fVar11;
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar8 * fVar10;
  return;
}
