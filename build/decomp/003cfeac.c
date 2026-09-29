// OoT3D decomp @ 003cfeac  name=FUN_003cfeac  size=224

void FUN_003cfeac(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;

  uVar2 = uRam003cff90;
  if (*(short *)(param_1 + 0xa0e) == 0) {
    *(undefined4 *)(param_1 + 0xa30) = uRam003cff8c;
    *(short *)(param_1 + 0xa0c) = (short)uVar2;
    FUN_003686a8(param_1,2);
    iVar4 = 2;
  }
  else {
    if ((*(float *)(param_1 + 0xa30) <= *(float *)(param_1 + 0x98)) ||
       (iVar4 = FUN_0036cd8c(param_2), iVar4 == 0)) {
      iVar4 = (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0x36));
      if ((*(short *)(param_1 + 0xa0c) <= iVar4) || (iVar4 <= -(int)*(short *)(param_1 + 0xa0c))) {
        return;
      }
    }
    uVar2 = uRam003cff94;
    *(undefined2 *)(param_1 + 0xa0e) = 900;
    *(undefined4 *)(param_1 + 0xa34) = uVar2;
    uVar2 = uRam003cff98;
    *(undefined2 *)(param_1 + 0xa10) = 0x5a;
    *(undefined4 *)(param_1 + 0xa30) = uVar2;
    *(undefined2 *)(param_1 + 0xa0c) = 0x2000;
    FUN_003686a8(param_1,7);
    iVar4 = 7;
  }
  iVar1 = DAT_00372a5c;
  *(char *)(param_1 + 0xa15) = (char)iVar4;
  *(undefined4 *)(param_1 + 0x9ac) = *(undefined4 *)(iVar1 + iVar4 * 4);
  switch(iVar4) {
  case 0:
  case 3:
  case 4:
    uVar3 = 0;
    break;
  default:
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0xa17) = uVar3;
  return;
}
