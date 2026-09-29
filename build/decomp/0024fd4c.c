// OoT3D decomp @ 0024fd4c  name=FUN_0024fd4c  size=236

void FUN_0024fd4c(int param_1,int param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;

  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  bVar5 = iVar3 == 0;
  if (bVar5) {
    iVar3 = (int)*(short *)(param_1 + 0x84c);
  }
  if (bVar5 && iVar3 == iRam0024fe38) {
    iVar3 = (int)*(float *)(param_1 + 0x1e0);
    if ((iVar3 == 0x35 || iVar3 == 0x38) || iVar3 == 0x3d) {
      FUN_00375bcc(param_1,uRam0024fe40);
    }
    if ((int)*(float *)(param_1 + 0x1e0) == 0x3d) {
      *(char *)(param_2 + 0x2094) = *(char *)(param_2 + 0x2094) + -1;
      iVar3 = param_2 + 0x208c + (uint)*(byte *)(param_1 + 2) * 8;
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -1;
      if (*(int *)(param_1 + 300) == 0) {
        *(undefined4 *)(param_2 + 0x208c + (uint)*(byte *)(param_1 + 2) * 8 + 0x10) =
             *(undefined4 *)(param_1 + 0x130);
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 300) + 0x130) = *(undefined4 *)(param_1 + 0x130);
      }
      if (*(int *)(param_1 + 0x130) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x130) + 300) = *(undefined4 *)(param_1 + 300);
      }
      *(undefined4 *)(param_1 + 0x130) = 0;
      *(undefined4 *)(param_1 + 300) = 0;
      uVar4 = (uint)*(char *)(param_1 + 3);
      bVar5 = uVar4 == (int)(char)*(byte *)(DAT_00375e14 + param_2);
      if (bVar5) {
        uVar4 = (uint)*(byte *)(param_1 + 2);
      }
      bVar6 = bVar5 && uVar4 == 5;
      if (bVar5 && uVar4 == 5) {
        bVar6 = *(int *)(param_2 + 0x20c0) == 0;
      }
      if (bVar6) {
        *(uint *)(param_2 + 0x2240) =
             *(uint *)(param_2 + 0x2240) | 1 << (uint)*(byte *)(DAT_00375e14 + param_2);
      }
      *(undefined1 *)(param_1 + 2) = 6;
      *(char *)(param_2 + 0x2094) = *(char *)(param_2 + 0x2094) + '\x01';
      *(int *)(param_2 + 0x20c8) = *(int *)(param_2 + 0x20c8) + 1;
      iVar3 = *(int *)(&DAT_000020cc + param_2);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 300) = param_1;
      }
      *(int *)(&DAT_000020cc + param_2) = param_1;
      *(int *)(param_1 + 0x130) = iVar3;
      return;
    }
  }
  else {
    if (*(short *)(param_1 + 0x84c) == iRam0024fe38) {
      FUN_0036e734(param_1 + 0x1a4,8);
    }
    sVar1 = *(short *)(param_1 + 0x84c) + -1;
    *(short *)(param_1 + 0x84c) = sVar1;
    if (sVar1 < 0xe1) {
      if (*(char *)(param_1 + 0x84a) == '\0') {
        *(undefined4 *)(param_1 + 0x140) = 0;
        *(undefined4 *)(param_1 + 0x13c) = 0;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
        return;
      }
      cVar2 = *(char *)(param_1 + 0x84a) + -5;
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) - fRam0024fe3c;
      *(char *)(param_1 + 0x84a) = cVar2;
      *(char *)(param_1 + 0xd0) = cVar2;
    }
  }
  return;
}
