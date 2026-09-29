// OoT3D decomp @ 0045fb14  name=FUN_0045fb14  size=300

void FUN_0045fb14(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  uint in_fpscr;
  uint uVar3;
  float fVar4;
  float fVar5;

  fVar5 = DAT_0045fc44;
  fVar4 = DAT_0045fc40;
  if (*(char *)(param_1 + 0x10) == '\0') {
    fVar4 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = *(float *)(param_1 + 8) - (*(float *)(param_1 + 0xc) * DAT_0045fc40) / fVar4;
    *(float *)(param_1 + 8) = fVar4;
    if (*(char *)(param_1 + 0x11) == '\x03') {
      if ((int)fVar4 < 0x3f000001) {
        *(undefined4 *)(param_1 + 8) = DAT_0045fc5c;
        *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x14) + '\x01';
        return;
      }
    }
    else if (fVar4 <= fVar5) {
      *(float *)(param_1 + 8) = fVar5;
      *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x14) + '\x01';
      return;
    }
  }
  else {
    uVar3 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 8) == DAT_0045fc44) << 0x1e;
    bVar2 = false;
    if (SUB41(uVar3 >> 0x1e,0)) {
      bVar2 = *(char *)(param_1 + 0x13) == '\x02';
    }
    if (bVar2) {
      FUN_0037547c(DAT_0045fc50,0,4,DAT_0045fc4c,DAT_0045fc4c,DAT_0045fc48);
    }
    iVar1 = DAT_0045fc54;
    fVar5 = (float)VectorSignedToFloat(param_2,(byte)(uVar3 >> 0x15) & 3);
    fVar4 = (*(float *)(param_1 + 0xc) * fVar4) / fVar5 + *(float *)(param_1 + 8);
    *(float *)(param_1 + 8) = fVar4;
    if (iVar1 <= (int)fVar4) {
      *(undefined4 *)(param_1 + 8) = DAT_0045fc58;
      *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x14) + '\x01';
    }
  }
  return;
}
