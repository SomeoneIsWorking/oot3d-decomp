// OoT3D decomp @ 00255200  name=FUN_00255200  size=548

void FUN_00255200(int param_1,int param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;

  *(undefined1 *)(param_1 + 0x19a) = 1;
  if ((*(ushort *)(param_1 + 0x1c) & 0xf) < 8) {
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar3 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_00255440 + iVar3) != 0)) {
      iVar3 = iVar3 + 0x3a5c;
    }
    else {
      iVar3 = 0;
    }
    uVar4 = FUN_003532c0(iVar3 + 0x10,1);
    FUN_003532e8(param_1,1);
    uVar4 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar4);
    *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  }
  if ((uint)((int)*(short *)(param_1 + 0x1c) << 0x10) >> 0x18 < 0x40) {
    iVar3 = FUN_0036e864(param_2,(uint)((int)*(short *)(param_1 + 0x1c) << 0x12) >> 0x1a);
    uVar2 = *(ushort *)(param_1 + 0x1c) & 0xf;
    if (iVar3 == 0) {
      if (((uVar2 == 4 || uVar2 == 5) || uVar2 == 6) || uVar2 == 7) goto LAB_00255300;
    }
    else if ((*(ushort *)(param_1 + 0x1c) & 0xf) < 4) {
LAB_00255300:
      FUN_00374428(param_1);
      return;
    }
  }
  FUN_0037572c(*(undefined4 *)(DAT_00255444 + (*(ushort *)(param_1 + 0x1c) & 0xf) * 4),param_1);
  switch((int)*(short *)(param_1 + 0x1c) & 0xf) {
  case 0:
  case 1:
  case 4:
  case 5:
    iVar3 = 0;
    break;
  case 2:
  case 6:
    iVar3 = 1;
    break;
  default:
    iVar3 = 2;
  }
  iVar5 = 0;
  do {
    if ((int)*(short *)(param_2 + 0x104) == (int)*(char *)(DAT_00255448 + iVar5)) {
      FUN_00372f38(param_1,param_2,param_1 + 0x1c0,
                   (int)*(char *)(*(int *)(DAT_0025544c + iVar5 * 4) +
                                 ((uint)((int)*(short *)(param_1 + 0x1c) << 0x18) >> 0x1e) +
                                 iVar3 * 4),0);
      break;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 9);
  FUN_003510b0(param_1,DAT_00255450);
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  puVar6 = (undefined4 *)(param_1 + 0x1f0);
  iVar3 = 2;
  *(undefined4 *)(param_1 + 0x1f0) = 0x32;
  do {
    puVar6[1] = 0x32;
    iVar3 = iVar3 + -1;
    puVar6 = puVar6 + 2;
    *puVar6 = 0x32;
    uVar4 = DAT_00255454;
  } while (iVar3 != 0);
  *(ushort *)(param_1 + 0x1c4) = *(ushort *)(param_1 + 0x1c4) | 8;
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  uVar1 = DAT_0025545c;
  uVar4 = DAT_00255458;
  *(undefined4 *)(param_1 + 0x68) = DAT_00255458;
  *(undefined4 *)(param_1 + 100) = uVar4;
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  return;
}
