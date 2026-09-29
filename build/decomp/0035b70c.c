// OoT3D decomp @ 0035b70c  name=FUN_0035b70c  size=228

void FUN_0035b70c(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;

  iVar4 = *(int *)(DAT_0035b7fc + param_2);
  uVar3 = FUN_0036ae14(param_1 + 0x1e0,7);
  fVar2 = DAT_0035b800;
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0035b804,DAT_0035b800,uVar3,DAT_0035b800,param_1 + 0x1e0,7,1);
  sVar1 = *(short *)(iVar4 + 0xbe);
  fVar5 = (float)FUN_002cfca0((int)(short)(sVar1 - *(short *)(param_1 + 0xbe)));
  if (fVar2 < fVar5) {
    *(undefined4 *)(param_1 + 0x6c) = DAT_0035b808;
  }
  else {
    fVar5 = (float)FUN_002cfca0((int)(short)(sVar1 - *(short *)(param_1 + 0xbe)));
    if (fVar2 <= fVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    *(undefined4 *)(param_1 + 0x6c) = DAT_0035b80c;
  }
  *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x6c) * DAT_0035b810;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  *(undefined4 *)(param_1 + 0xbfc) = 9;
  *(float *)(param_1 + 0xc00) = fVar2;
  *(float *)(param_1 + 0xc08) = fVar2;
  uVar3 = DAT_0035b814;
  *(undefined4 *)(param_1 + 0xbe8) = 0x10;
  *(undefined4 *)(param_1 + 0xbf0) = uVar3;
  return;
}
