// OoT3D decomp @ 001f4284  name=FUN_001f4284  size=240

void FUN_001f4284(int param_1,int param_2)

{
  uint uVar1;
  short *psVar2;
  int iVar3;

  iVar3 = *(int *)(DAT_001f4374 + param_2);
  if (*(char *)(param_1 + 2) != '\x06') {
    if ((*(uint *)(DAT_001f4380 + iVar3) & 0x20000000) != 0) {
      return;
    }
    (**(code **)(param_1 + 0x268))(param_1);
    FUN_0037322c(DAT_001f4384,param_1);
    *(char *)(param_1 + 0x26d) = *(char *)(param_1 + 0x26d) + '\x01';
    return;
  }
  if (*(int *)(param_1 + 0x268) != DAT_001f4378) {
    psVar2 = *(short **)(param_1 + 0x22c);
    if (psVar2 != (short *)0x0) {
      FUN_0036df4c(psVar2 + 0x14,iVar3 + 0x28);
      if (*psVar2 == 0x15) {
        *(undefined4 *)(psVar2 + 0x38) = DAT_001f437c;
        psVar2[0x48] = psVar2[0x48] & 0xfffc;
      }
      else {
        *(uint *)(psVar2 + 2) = *(uint *)(psVar2 + 2) & 0xffffdfff;
      }
    }
    *(uint *)(iVar3 + 0x1710) = *(uint *)(iVar3 + 0x1710) & 0xfdffffff;
    uVar1 = *(uint *)(iVar3 + 0x29b8);
    *(uint *)(iVar3 + 0x29b8) = uVar1 | 0x10000;
    if ((uVar1 & 0x1000) != 0) {
      *(uint *)(iVar3 + 0x29b8) = uVar1 & 0xffffefff | 0x10000;
      *(int *)(param_1 + 0x268) = DAT_001f4378;
      return;
    }
  }
  FUN_00374428(param_1);
  return;
}
