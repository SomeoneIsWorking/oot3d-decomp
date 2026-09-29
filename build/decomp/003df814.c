// OoT3D decomp @ 003df814  name=FUN_003df814  size=360

void FUN_003df814(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;

  if (*(short *)(param_1 + 0x1c0) != 0) {
    *(short *)(param_1 + 0x1c0) = *(short *)(param_1 + 0x1c0) + -1;
  }
  fVar4 = fRam003df9e0;
  if (*(short *)(param_1 + 0x36) == 0) {
    fVar4 = fRam003df9e4;
  }
  iVar3 = FUN_003705a0(*(float *)(param_1 + 8) + fVar4,uRam003df9e8,param_1 + 0x28);
  uVar1 = uRam003df9f4;
  if (iVar3 == 0) {
    if (((*(uint *)(iRam003df9f0 + 4) & 1) == 0) &&
       (iVar3 = FUN_003679b4(uRam003df9f8), puVar2 = puRam003df9fc, iVar3 != 0)) {
      *puRam003df9fc = uVar1;
      puVar2[1] = uVar1;
      puVar2[2] = uVar1;
    }
    fVar4 = fRam003dfa00;
    if (*(short *)(param_1 + 0x36) == 0) {
      fVar4 = fRam003dfa04;
    }
    uStack_34 = *(undefined4 *)(param_1 + 0x2c);
    fStack_30 = *(float *)(param_1 + 0x30);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0(fRam003dfa0c - (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 8)) * fVar4);
  }
  if (*(short *)(param_1 + 0x1c0) == 0) {
    if (*(short *)(param_1 + 0xbe) == 0) {
      fStack_30 = *(float *)(param_1 + 0x30) + fRam003df9ec;
    }
    else {
      fStack_30 = *(float *)(param_1 + 0x30) - fRam003df9ec;
    }
    uStack_38 = *(undefined4 *)(param_1 + 0x28);
    uStack_34 = *(undefined4 *)(param_1 + 0x2c);
    FUN_00375c44(param_2,&uStack_38,0x32,uRam003dfa18);
    *(undefined4 *)(param_1 + 0x1bc) = uRam003dfa1c;
  }
  return;
}
