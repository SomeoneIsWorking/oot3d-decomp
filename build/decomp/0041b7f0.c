// OoT3D decomp @ 0041b7f0  name=FUN_0041b7f0  size=104

void FUN_0041b7f0(int param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  uVar2 = DAT_0041b858;
  *(char *)(param_1 + 0x785) = *param_2;
  uVar4 = DAT_0041b864;
  uVar3 = DAT_0041b85c;
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x85c) = uVar2;
    *(undefined4 *)(param_1 + 0x860) = 100;
    *(undefined4 *)(param_1 + 0x864) = uVar4;
    return;
  }
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x85c) = DAT_0041b85c;
    *(undefined4 *)(param_1 + 0x860) = 100;
    *(undefined4 *)(param_1 + 0x864) = uVar2;
  }
  else if (cVar1 == '\x02') {
    *(undefined4 *)(param_1 + 0x85c) = DAT_0041b860;
    *(undefined4 *)(param_1 + 0x860) = 100;
    *(undefined4 *)(param_1 + 0x864) = uVar3;
  }
  return;
}
