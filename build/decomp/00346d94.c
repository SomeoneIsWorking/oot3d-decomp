// OoT3D decomp @ 00346d94  name=FUN_00346d94  size=148

int FUN_00346d94(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  iVar2 = *(int *)(param_1 + 0x20b4);
  do {
    if (iVar2 == 0) {
      return 0;
    }
    if ((iVar2 != param_2) && (*(short *)(iVar2 + 0x1c) == 1)) {
      fVar6 = *(float *)(iVar2 + 0x28) - *(float *)(param_2 + 0x28);
      fVar3 = *(float *)(iVar2 + 0x2c) - *(float *)(param_2 + 0x2c);
      fVar4 = *(float *)(iVar2 + 0x30) - *(float *)(param_2 + 0x30);
      fVar5 = (float)VectorSignedToFloat(*(short *)(iVar2 + 0xc0) * 10,(byte)(in_fpscr >> 0x15) & 3)
      ;
      fVar3 = SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4);
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar5 + DAT_00346e28 < fVar3) << 0x1f;
      in_fpscr = uVar1 | (uint)(NAN(fVar5 + DAT_00346e28) || NAN(fVar3)) << 0x1c;
      if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
        return iVar2;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x130);
  } while( true );
}
