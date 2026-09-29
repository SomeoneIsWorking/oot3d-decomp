// OoT3D decomp @ 0028497c  name=FUN_0028497c  size=320

void FUN_0028497c(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;

  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00284adc + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  uVar3 = FUN_00328ddc(iVar2 + 0x10,0);
  *(undefined4 *)(param_1 + 0x1b0) = uVar3;
  switch(*(ushort *)(param_1 + 0x1c) & 0xf) {
  case 0:
    uVar3 = DAT_00284ae4;
    break;
  case 1:
    iVar2 = FUN_00350cf4(0x18);
    uVar3 = DAT_00284ae8;
    if (iVar2 != 0) {
      FUN_00374428(param_1);
      uVar3 = DAT_00284ae8;
    }
    break;
  case 2:
    uVar3 = DAT_00284aec;
    if ((*(ushort *)(DAT_00284ae0 + 0xf4) & 0x400) != 0) {
      FUN_00374428(param_1);
      uVar3 = DAT_00284aec;
    }
    break;
  case 3:
    uVar3 = DAT_00284af0;
    if ((*(ushort *)(DAT_00284ae0 + 0xf4) & 0x400) != 0) {
      FUN_00374428(param_1);
      uVar3 = DAT_00284af0;
    }
    break;
  case 4:
    uVar3 = DAT_00284af4;
    if ((*(ushort *)(DAT_00284ae0 + 0xf4) & 0x200) != 0) {
      FUN_00374428(param_1);
      uVar3 = DAT_00284af4;
    }
    break;
  case 5:
    uVar1 = *(ushort *)(DAT_00284ae0 + 0xf4);
    if ((((uVar1 & 0x100) == 0 || (uVar1 & 0x200) == 0) || (uVar1 & 0x400) == 0) ||
       (uVar3 = DAT_00284b00, (*(uint *)(DAT_00284af8 + 0xbc) & *(uint *)(DAT_00284afc + 0x10)) != 0
       )) {
      FUN_00374428(param_1);
      uVar3 = DAT_00284b00;
    }
    break;
  case 6:
    bVar4 = *(char *)(param_2 + 0x7fa4) + 1;
    *(byte *)(param_2 + 0x7fa4) = bVar4;
    uVar3 = DAT_00284b04;
    *(uint *)(param_1 + 0x1ac) = (uint)bVar4;
    break;
  case 7:
    uVar3 = DAT_00284b08;
    break;
  default:
    return;
  }
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  return;
}
