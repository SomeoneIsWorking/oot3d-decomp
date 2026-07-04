// OoT3D decomp @ 002275ac  name=FUN_002275ac  size=464

bool FUN_002275ac(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = UNK_00227780;
  piVar1 = UNK_0022777c;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar3 = param_1 + iVar4 * 0x28;
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x18) + *(float *)(iVar3 + 0xc) * fVar8 * fVar2;
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) + *(float *)(iVar3 + 0x10) * fVar8 * fVar2
      ;
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + *(float *)(iVar3 + 0x14) * fVar8 * fVar2
      ;
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(iVar3 + 0x10) =
           *(float *)(iVar3 + 0x10) + *(float *)(param_1 + 0x510) * fVar8 * fVar2;
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x24),(byte)(in_fpscr >> 0x15) & 3)
      ;
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar5 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x2a),(byte)(in_fpscr >> 0x15) & 3)
      ;
      *(short *)(iVar3 + 0x2a) = (short)(int)(fVar5 + fVar8 * fVar7 * fVar2);
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x26),(byte)(in_fpscr >> 0x15) & 3)
      ;
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar5 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x2c),(byte)(in_fpscr >> 0x15) & 3)
      ;
      *(short *)(iVar3 + 0x2c) = (short)(int)(fVar5 + fVar8 * fVar7 * fVar2);
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x28),(byte)(in_fpscr >> 0x15) & 3)
      ;
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar5 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x2e),(byte)(in_fpscr >> 0x15) & 3)
      ;
      *(short *)(iVar3 + 0x2e) = (short)(int)(fVar5 + fVar8 * fVar7 * fVar2);
      uVar6 = FUN_003759d0();
      *(undefined4 *)(iVar3 + 0x30) = uVar6;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  iVar4 = *(int *)(param_1 + 0x53c) + 1;
  *(int *)(param_1 + 0x53c) = iVar4;
  return *(int *)(param_1 + 0x540) < iVar4;
}

