// OoT3D decomp @ 003352c8  name=FUN_003352c8  size=204

void FUN_003352c8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  uVar3 = 4;
  iVar4 = FUN_00357eac(param_1,*(undefined4 *)(DAT_00335394 + param_2));
  iVar2 = DAT_00335398 + -0x320000;
  if (DAT_00335398 < iVar4) {
    uVar3 = 7;
  }
  else if ((iVar2 < iVar4) && (iVar4 <= DAT_00335398)) {
    uVar3 = 5;
  }
  cVar1 = *(char *)(param_1 + 0xe74);
  if (cVar1 == '\a') {
    if (DAT_00335398 < iVar4) {
LAB_00335344:
      uVar3 = 7;
      goto LAB_0033537c;
    }
  }
  else if (cVar1 == '\x05') {
    if (DAT_00335398 < iVar4) goto LAB_00335344;
    if (iVar4 < iVar2) {
LAB_00335378:
      uVar3 = 4;
      goto LAB_0033537c;
    }
  }
  else {
    if (cVar1 != '\x04') goto LAB_0033537c;
    if (iVar4 <= iVar2) goto LAB_00335378;
  }
  uVar3 = 5;
LAB_0033537c:
  FUN_0031c588(DAT_003353a0,DAT_0033539c,param_1,uVar3);
  return;
}
