// OoT3D decomp @ 0029cc90  name=FUN_0029cc90  size=316

void FUN_0029cc90(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar3 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c));
  iVar2 = DAT_0029cdcc;
  if (((iVar3 == 0) && (sVar1 = *(short *)(param_1 + 0x1a4), sVar1 != -1)) &&
     ((sVar1 == 0 || (*(short *)(param_1 + 0x1a4) = sVar1 + -1, (short)(sVar1 + -1) == 0)))) {
    *(undefined2 *)(param_1 + 0x1a4) = 0xffff;
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
  }
  if (((*(byte *)(param_1 + 0x1b9) & 2) != 0) &&
     (0xa000 < (int)(short)(*(short *)(*(int *)(param_1 + 0x1b0) + 0x36) -
                           *(short *)(param_1 + 0xbe)) + 0x5000U)) {
    *(byte *)(param_1 + 0x1b9) = *(byte *)(param_1 + 0x1b9) & 0xfd;
    if (*(short *)(param_1 + 0x1a4) == -1) {
      FUN_00375bcc(param_1,DAT_0029cdd0);
      iVar3 = *(int *)(iVar2 + 4) + 1;
      *(int *)(iVar2 + 4) = iVar3;
      if (4 < iVar3) {
        iVar3 = 4;
      }
      *(int *)(iVar2 + 4) = iVar3;
    }
    *(undefined2 *)(param_1 + 0x1a4) = 0x270;
    iVar3 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c));
    bVar4 = iVar3 == 0;
    if (bVar4) {
      iVar3 = *(int *)(iVar2 + 4);
    }
    if (bVar4 && iVar3 == 4) {
      FUN_00375c10(param_2,(int)*(short *)(param_1 + 0x1c));
      FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_0029cdd4);
    }
  }
  if (*(short *)(param_1 + 0x1a4) == -1) {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
  }
  FUN_0037322c(DAT_0029cdd8,param_1);
  return;
}
