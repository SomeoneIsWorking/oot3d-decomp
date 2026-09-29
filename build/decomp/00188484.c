// OoT3D decomp @ 00188484  name=FUN_00188484  size=416

void FUN_00188484(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;

  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00188624 + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x1360),2,900,600);
  iVar3 = DAT_00188628;
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  if ((*(int *)(param_1 + 0x98) < iVar3) && (iVar3 = FUN_0037577c(param_2), iVar3 == 0)) {
    uVar1 = (*(ushort *)(param_1 + 0x1c) & 0xfc0) >> 6;
    if (uVar1 == 7) {
      uVar4 = FUN_00375750(iVar2 + 0x10,0);
      FUN_0037573c(param_2,uVar4);
      *(undefined4 *)(param_1 + 0x140) = 0;
    }
    else if (uVar1 == 8 || uVar1 == 9) {
      uVar4 = FUN_00375750(iVar2 + 0x10,1);
      FUN_0037573c(param_2,uVar4);
      *(undefined4 *)(param_1 + 0x140) = 0;
    }
    FUN_0037547c(DAT_00188634,0,4,DAT_00188630,DAT_00188630,DAT_0018862c);
    *(undefined1 *)(DAT_00188638 + 0x5a2) = 1;
    FUN_00231364(0x14,10);
    *(undefined4 *)(param_1 + 0x1370) = DAT_0018863c;
    *(undefined1 *)(param_1 + 0x136c) = 0;
    *(ushort *)(param_1 + 0x135c) = *(ushort *)(param_1 + 0x135c) | 0x80;
    *DAT_00188640 = 0;
  }
  if (DAT_00188644 <= *(int *)(param_1 + 0x238)) {
    if (*(short *)(param_1 + 0x135e) == 0) {
      *(undefined4 *)(param_1 + 0x1370) = DAT_00188648;
    }
    else {
      *(undefined4 *)(param_1 + 0x238) = DAT_0018864c;
      *(short *)(param_1 + 0x135e) = *(short *)(param_1 + 0x135e) + -1;
    }
  }
  *(ushort *)(param_1 + 0x135c) = *(ushort *)(param_1 + 0x135c) | 8;
  return;
}
