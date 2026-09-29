// OoT3D decomp @ 0038bbb8  name=FUN_0038bbb8  size=148

void FUN_0038bbb8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  short *psVar3;

  if ((*(ushort *)(param_1 + 0x1a4) & 1) == 0) {
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + -0x20;
    if (*(char *)(param_1 + 0x1a8) == -1) {
      cVar1 = -1;
    }
    else {
      cVar1 = *(char *)(param_1 + 0x1a8) + '\x05';
    }
    *(char *)(param_1 + 0x1a8) = cVar1;
  }
  else {
    iVar2 = FUN_0037571c(param_2);
    psVar3 = (short *)0x0;
    if (iVar2 != 0) {
      psVar3 = *(short **)(DAT_0038bc4c + param_2);
    }
    if ((iVar2 != 0 && psVar3 != (short *)0x0) && (*psVar3 == 2)) {
      if (*(byte *)(param_1 + 0x1a8) < 6) {
        *(undefined1 *)(param_1 + 0x1a8) = 0;
        *(ushort *)(param_1 + 0x1a4) = *(ushort *)(param_1 + 0x1a4) & 0xfffe;
        return;
      }
      *(byte *)(param_1 + 0x1a8) = *(byte *)(param_1 + 0x1a8) - 5;
    }
  }
  return;
}
