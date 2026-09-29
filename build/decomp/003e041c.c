// OoT3D decomp @ 003e041c  name=FUN_003e041c  size=124

void FUN_003e041c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  if (*(short *)(param_1 + 0x1d0) == 0) {
    FUN_00375bcc(param_1,uRam003e0498);
    uVar2 = uRam003e04a4;
    uVar1 = uRam003e04a0;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - fRam003e049c;
    FUN_00373500(uRam003e04a8,uVar2,uVar1,param_1 + 0x30);
    if (uRam003e04ac < *(uint *)(param_1 + 0x28)) {
      FUN_00375bcc(param_1,uRam003e04b0);
      *(undefined2 *)(param_1 + 0x1d0) = 0x2d;
      *(undefined4 *)(param_1 + 0x1bc) = uRam003e04b4;
    }
  }
  return;
}
