// OoT3D decomp @ 003f2140  name=FUN_003f2140  size=408

void FUN_003f2140(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;

  iVar5 = *(int *)(DAT_003f22d8 + param_2);
  iVar4 = FUN_003705a0(DAT_003f22dc,DAT_003f22e0,param_1 + 0x54);
  if (iVar4 != 0) {
    if (((*(char *)(param_1 + 0x1f) == '\0') || (*(char *)(param_2 + 0x5c2d) != '\0')) ||
       ((*(uint *)(DAT_003f22e4 + iVar5) & 0x80000000) == 0)) {
      iVar4 = FUN_0036a7a0(param_2);
      if (((iVar4 == 0) && ((*(uint *)(iVar5 + 0x1710) & 0x8800000) == 0)) &&
         ((*(int *)(param_1 + 0x98) <= DAT_003f230c &&
          ((*(uint *)(param_1 + 0x9c) <= DAT_003f2310 &&
           ((int)*(uint *)(param_1 + 0x9c) <= DAT_003f230c)))))) {
        *(uint *)(iVar5 + 0x1710) = *(uint *)(iVar5 + 0x1710) | 0x80000000;
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      *(undefined1 *)(param_1 + 0x1f) = uVar3;
    }
    else if (*(char *)(DAT_003f22e8 + iVar5) == '\0') {
      iVar5 = (((uint)*(ushort *)(param_1 + 0x1c) << 0x11) >> 0x1d) - 1;
      FUN_0036c494(param_2,1,0x4ff);
      iVar4 = DAT_003f2304;
      *(undefined4 *)(DAT_003f2300 + 0x110) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined2 *)(iVar4 + 0x18) = *(undefined2 *)(param_1 + 0x16);
      *(char *)(iVar4 + 0x1f) = (char)*(undefined2 *)(param_1 + 0x1c);
      if (iVar5 < 0) {
        iVar5 = *(short *)(param_1 + 0x18) + 1;
      }
      *(undefined2 *)(param_2 + 0x5c32) = *(undefined2 *)(DAT_003f2308 + iVar5 * 2);
      *(undefined4 *)(param_1 + 0x1fc) = DAT_003f22fc;
    }
    else {
      FUN_0036ebdc(param_2);
      uVar2 = DAT_003f22f4;
      uVar1 = DAT_003f22f0;
      *(undefined1 *)(DAT_003f22ec + param_2) = 4;
      FUN_0037547c(DAT_003f22f8,0,4,uVar2,uVar2,uVar1);
      *(undefined4 *)(param_1 + 0x1fc) = DAT_003f22fc;
    }
  }
  FUN_0037572c(*(undefined4 *)(param_1 + 0x54),param_1);
  return;
}
