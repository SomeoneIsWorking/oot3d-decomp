// OoT3D decomp @ 003d9534  name=FUN_003d9534  size=436

void FUN_003d9534(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;

  *(short *)(param_1 + 0x1c2) = *(short *)(param_1 + 0x1c2) + -1;
  uVar1 = DAT_003d96f0;
  if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
    if (*(char *)(param_1 + 0x1c0) == '\0') {
      *(undefined2 *)(param_1 + 0x1c2) = 0x5a;
      *(undefined4 *)(param_1 + 0x1bc) = DAT_003d96e8;
    }
    else {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - DAT_003d96ec;
      *(undefined4 *)(param_1 + 0x1bc) = uVar1;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffcf;
    }
    FUN_00375bcc(param_1,DAT_003d96f4);
    iVar3 = FUN_00341df0(param_2 + 0xa98,*(undefined4 *)(param_1 + 0x7c),
                         *(undefined1 *)(param_1 + 0x81));
    FUN_00375bcc(param_1,iVar3 + 0x1000001);
    uVar1 = DAT_003d96fc;
    if (*(int *)(param_1 + 0x98) < DAT_003d96f8) {
      uVar4 = FUN_0036f848(*(undefined4 *)(param_2 + *(short *)(DAT_003d9700 + param_2) * 4 + 0xa54)
                           ,3);
      FUN_0036f7c0(uVar4,uVar1);
      FUN_0036f6b0(uVar4,5,0,0,0);
      FUN_0036f628(uVar4,3);
    }
  }
  fVar2 = DAT_003d9708;
  fVar5 = *(float *)(param_1 + 0x1c4) - DAT_003d9704;
  *(float *)(param_1 + 0x1c4) = fVar5;
  if (fVar5 < fVar2) {
    fVar5 = fVar2;
  }
  *(float *)(param_1 + 0x1c4) = fVar5;
  if (*(char *)(param_1 + 0x1c0) == '\0') {
    iVar3 = FUN_0036adf4(param_1);
    if (iVar3 != 0) {
      if (*(char *)(param_1 + 0x1c1) == '\0') {
        *(undefined1 *)(param_1 + 0x1c1) = 3;
      }
      FUN_0033885c(*(undefined4 *)(param_2 + 0xa54),0x30);
      return;
    }
    iVar3 = FUN_0036adf4(param_1);
    if (iVar3 == 0) {
      if (*(char *)(param_1 + 0x1c1) != '\0') {
        FUN_0033885c(*(undefined4 *)(param_2 + 0xa54),3);
      }
      *(undefined1 *)(param_1 + 0x1c1) = 0;
    }
  }
  return;
}
