// OoT3D decomp @ 0033c11c  name=FUN_0033c11c  size=156

void FUN_0033c11c(int param_1,int param_2,int param_3)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_3 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(param_3 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(param_3 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
  fVar1 = (float)VectorSignedToFloat(*(undefined4 *)(param_3 + 0x18),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorSignedToFloat(*(undefined4 *)(param_3 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorSignedToFloat(*(undefined4 *)(param_3 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = (float)VectorSignedToFloat((uint)*(ushort *)(param_3 + 4) - (uint)*(ushort *)(param_3 + 2)
                                     ,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorSignedToFloat((uint)*(ushort *)(param_1 + 0x22b8) -
                                     (uint)*(ushort *)(param_3 + 2),(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = fVar4 / fVar8;
  *(float *)(param_2 + 0x28) = fVar5 + (fVar1 - fVar5) * fVar4;
  *(float *)(param_2 + 0x2c) = fVar6 + (fVar2 - fVar6) * fVar4;
  *(float *)(param_2 + 0x30) = fVar7 + (fVar3 - fVar7) * fVar4;
  return;
}
