// OoT3D decomp @ 0031fe84  name=FUN_0031fe84  size=168

void FUN_0031fe84(undefined4 *param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 0x122);
  if (cVar1 == '\x02') {
    iVar3 = FUN_004558e4(*param_1);
    if (iVar3 != 0) {
      uVar2 = 3;
LAB_0031ff24:
      *(undefined *)(param_1 + 0x122) = uVar2;
      return;
    }
  }
  else if (cVar1 == '\x03') {
    iVar3 = FUN_00453120(param_1);
    if (iVar3 != 0) {
      uVar2 = 4;
      goto LAB_0031ff24;
    }
  }
  else if ((cVar1 == '\x04') && ('\x01' < *(char *)(DAT_0031ff2c + (int)param_1))) {
    FUN_00313b60();
    FUN_002dd068();
    FUN_0044f288();
    FUN_004535b8(param_1 + 0x116);
    iVar3 = FUN_00456e44(param_1 + 0xec);
    if (iVar3 != 0) {
      FUN_002dd070(param_1 + 0xec);
    }
    *(undefined *)((int)param_1 + 0x489) = 0;
  }
  return;
}

