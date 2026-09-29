// OoT3D decomp @ 00353ec8  name=FUN_00353ec8  size=268

int FUN_00353ec8(undefined4 param_1,byte *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  iVar1 = 0;
  do {
    if ((*(ushort *)(param_2 + iVar1 * 2 + 0x151c) & 1) == 0) {
      *(ushort *)(param_2 + iVar1 * 2 + 0x151c) = *(ushort *)(param_2 + iVar1 * 2 + 0x151c) | 1;
      *(int *)(param_2 + iVar1 * 0x6c + 4) = param_3;
      *(undefined4 *)(param_2 + iVar1 * 0x6c + 8) = param_4;
      uVar2 = *(undefined4 *)(param_3 + 0x58);
      uVar3 = *(undefined4 *)(param_3 + 0x5c);
      *(undefined4 *)(param_2 + iVar1 * 0x6c + 0x18) = *(undefined4 *)(param_3 + 0x54);
      *(undefined4 *)(param_2 + iVar1 * 0x6c + 0x1c) = uVar2;
      *(undefined4 *)(param_2 + iVar1 * 0x6c + 0x20) = uVar3;
      *(undefined2 *)(param_2 + iVar1 * 0x6c + 0x24) = *(undefined2 *)(param_3 + 0xbc);
      *(undefined2 *)(param_2 + iVar1 * 0x6c + 0x26) = *(undefined2 *)(param_3 + 0xbe);
      *(undefined2 *)(param_2 + iVar1 * 0x6c + 0x28) = *(undefined2 *)(param_3 + 0xc0);
      *(short *)(param_2 + iVar1 * 0x6c + 0x24) = *(short *)(param_2 + iVar1 * 0x6c + 0x24) + -1;
      uVar2 = *(undefined4 *)(param_3 + 0x2c);
      uVar3 = *(undefined4 *)(param_3 + 0x30);
      *(undefined4 *)(param_2 + iVar1 * 0x6c + 0x2c) = *(undefined4 *)(param_3 + 0x28);
      *(undefined4 *)(param_2 + iVar1 * 0x6c + 0x30) = uVar2;
      *(undefined4 *)(param_2 + iVar1 * 0x6c + 0x34) = uVar3;
      uVar2 = *(undefined4 *)(param_3 + 0x58);
      uVar3 = *(undefined4 *)(param_3 + 0x5c);
      *(undefined4 *)(param_2 + iVar1 * 0x6c + 0x38) = *(undefined4 *)(param_3 + 0x54);
      *(undefined4 *)(param_2 + iVar1 * 0x6c + 0x3c) = uVar2;
      *(undefined4 *)(param_2 + iVar1 * 0x6c + 0x40) = uVar3;
      *(undefined2 *)(param_2 + iVar1 * 0x6c + 0x44) = *(undefined2 *)(param_3 + 0xbc);
      *(undefined2 *)(param_2 + iVar1 * 0x6c + 0x46) = *(undefined2 *)(param_3 + 0xbe);
      *(undefined2 *)(param_2 + iVar1 * 0x6c + 0x48) = *(undefined2 *)(param_3 + 0xc0);
      uVar2 = *(undefined4 *)(param_3 + 0x2c);
      uVar3 = *(undefined4 *)(param_3 + 0x30);
      *(undefined4 *)(param_2 + iVar1 * 0x6c + 0x4c) = *(undefined4 *)(param_3 + 0x28);
      *(undefined4 *)(param_2 + iVar1 * 0x6c + 0x50) = uVar2;
      *(undefined4 *)(param_2 + iVar1 * 0x6c + 0x54) = uVar3;
      *param_2 = *param_2 | 1;
      *(ushort *)(param_2 + iVar1 * 2 + 0x151c) = *(ushort *)(param_2 + iVar1 * 2 + 0x151c) & 0xfffd
      ;
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x32);
  return 0x32;
}
