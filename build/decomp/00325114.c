// OoT3D decomp @ 00325114  name=FUN_00325114  size=212

void FUN_00325114(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;

  iVar4 = DAT_00325250;
  iVar3 = DAT_0032524c;
  uVar1 = *(ushort *)(DAT_0032524c + 0x92);
  if (param_2 < 0) {
    *(undefined2 *)(param_1 + 0x2e3c) = 0;
  }
  else {
    switch(*(undefined2 *)(param_1 + 0x104)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      iVar6 = DAT_00325250 + (uint)uVar1 * 0x1c;
      uVar5 = *(uint *)(DAT_00325254 + param_2 * 4);
      *(uint *)(iVar6 + 0x100) = *(uint *)(iVar6 + 0x100) | uVar5;
      if ((int)*(short *)(param_1 + 0x104) - 0x11U < 8) {
        iVar4 = iVar4 + *(short *)(param_1 + 0x104) * 0x1c;
        *(uint *)(iVar4 + 0x100) = uVar5 | *(uint *)(iVar4 + 0x100);
      }
      *(short *)(param_1 + 0x2e3c) = (short)param_2;
      *(ushort *)(param_1 + 0x2e3a) = uVar1;
      sVar2 = *(short *)(*(int *)(*(int *)(DAT_00325258 + 8) + 8) +
                        (uint)*(ushort *)(iVar3 + 0x92) * 0x40 + param_2 * 2);
      *(short *)(param_1 + 0x2e3e) = sVar2;
      iVar4 = param_1 + 0x2ba4 + sVar2 * 2;
      *(undefined1 *)(iVar4 + 500) = 2;
      *(undefined1 *)(iVar4 + 0x1f5) = 0xbf;
    }
  }
  if (*(short *)(iVar3 + 0xb0) != 2) {
    *(undefined2 *)(iVar3 + 0xb0) = 0;
  }
  return;
}
