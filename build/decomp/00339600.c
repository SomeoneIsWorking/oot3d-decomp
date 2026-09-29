// OoT3D decomp @ 00339600  name=FUN_00339600  size=76

void FUN_00339600(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  uint uVar3;

  fVar2 = *(float *)(param_1 + 0x204);
  if (*(char *)(param_1 + 0x1a8) != '\0') {
    fVar2 = fVar2 * DAT_0033964c;
  }
  uVar3 = VectorFloatToUnsigned(fVar2,3);
  if (param_2 == 0) {
    uVar1 = DAT_00339650;
    if (0x31 < (uVar3 & 0xff)) {
      uVar1 = DAT_00339654;
    }
  }
  else {
    uVar1 = DAT_00339658;
    if (0x31 < (uVar3 & 0xff)) {
      uVar1 = DAT_0033965c;
    }
  }
  FUN_00375bcc(param_1,uVar1);
  return;
}
