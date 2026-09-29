// OoT3D decomp @ 003e04b8  name=FUN_003e04b8  size=508

void FUN_003e04b8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;

  uVar3 = uRam003e074c;
  uVar2 = uRam003e0748;
  uVar1 = uRam003e0740;
  uStack_2c = uRam003e0740;
  uStack_28 = uRam003e0740;
  uStack_24 = uRam003e0740;
  uStack_38 = uRam003e0740;
  uStack_34 = uRam003e0740;
  uStack_30 = uRam003e0740;
  uStack_48 = *puRam003e0744;
  uStack_4c = puRam003e0744[1];
  uStack_58 = uRam003e0740;
  uStack_54 = uRam003e0740;
  uStack_50 = uRam003e0740;
  uStack_64 = uRam003e0740;
  uStack_60 = uRam003e0740;
  uStack_5c = uRam003e0740;
  *(short *)(param_1 + 0x38) = *(short *)(param_1 + 0x38) + 5000;
  if (*(short *)(param_1 + 0x1b2) == 0) {
    *(undefined4 *)(param_1 + 0x1ac) = uVar1;
  }
  FUN_00373500(*(undefined4 *)(param_1 + 0x1ac),uVar3,uVar2,param_1 + 0x1a8);
  if ((*(short *)(param_1 + 0x1b2) == 0) && (*(int *)(param_1 + 0x1a8) < iRam003e0750)) {
    FUN_00374428(param_1);
  }
  else {
    if ((*(short *)(param_1 + 0x1c) == 0) && ((*(byte *)(param_1 + 0x210) & 4) != 0)) {
      iVar5 = FUN_00351388(param_2);
      if (iVar5 != 0) {
        FUN_00375bcc(param_1,uRam003e0754);
        fVar4 = fRam003e0758;
        *(byte *)(param_1 + 0x210) = *(byte *)(param_1 + 0x210) & 0xe9 | 8;
        *(undefined4 *)(param_1 + 0x218) = 2;
        *(undefined2 *)(param_1 + 0x1b2) = 0x1e;
        *(undefined2 *)(param_1 + 0x1c) = 1;
        *(float *)(param_1 + 0x60) = -*(float *)(param_1 + 0x60);
        *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * fVar4;
        *(float *)(param_1 + 0x68) = -*(float *)(param_1 + 0x68);
        return;
      }
      *(undefined2 *)(param_1 + 0x1b2) = 0;
      FUN_0036f95c(param_2,param_1 + 0x28,&uStack_64,&uStack_58,10,5);
      *(undefined4 *)(param_1 + 0x68) = uVar1;
      *(undefined4 *)(param_1 + 100) = uVar1;
      uVar2 = uRam003e075c;
      *(undefined4 *)(param_1 + 0x60) = uVar1;
      FUN_00375bcc(param_1,uVar2);
      *(undefined4 *)(param_1 + 0x1a4) = uRam003e0760;
      return;
    }
    if (iRam003e0764 <= *(int *)(param_1 + 0x1a8)) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0(uRam003e0768,uRam003e076c);
    }
  }
  return;
}
