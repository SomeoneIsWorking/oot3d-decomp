// OoT3D decomp @ 0022dd1c  name=FUN_0022dd1c  size=164

void FUN_0022dd1c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;

  uVar2 = FUN_00363c10(param_2 + 0x3a58,0x110);
  *(undefined1 *)(param_1 + 0x870) = uVar2;
  cVar3 = FUN_00363c10(param_2 + 0x3a58,0xc5);
  bVar4 = -1 < cVar3;
  *(char *)(param_1 + 0x871) = cVar3;
  if (bVar4) {
    cVar3 = *(char *)(param_1 + 0x870);
  }
  if (bVar4 && -1 < cVar3) {
    *(undefined2 *)(param_1 + 0x868) = 0;
    if (*(short *)(param_2 + 0x104) == 0x37) {
      *(undefined2 *)(param_1 + 0x868) = 1;
    }
    uVar1 = DAT_0022ddc8;
    if ((*(short *)(param_1 + 0x868) == 0) || (*(int *)(DAT_0022ddc0 + 0x10) != 0)) {
      *(undefined4 *)(param_1 + 0xfc) = DAT_0022ddc4;
      *(undefined4 *)(param_1 + 0x840) = uVar1;
      return;
    }
  }
  FUN_00374428(param_1);
  return;
}
