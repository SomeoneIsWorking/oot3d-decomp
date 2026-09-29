// OoT3D decomp @ 002e9658  name=FUN_002e9658  size=236

void FUN_002e9658(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;

  iVar5 = DAT_002e9754;
  uVar4 = DAT_002e9750;
  piVar3 = DAT_002e974c;
  uVar2 = DAT_002e9748;
  uVar1 = DAT_002e9744;
  local_24 = DAT_002e9744;
  local_20 = DAT_002e9748;
  local_2c = DAT_002e9750;
  if (*DAT_002e974c == 0) {
    local_28 = DAT_002e9748;
  }
  else {
    local_28 = DAT_002e9750;
  }
  FUN_002fc40c(*(undefined4 *)(DAT_002e9754 + 8),&local_2c,&local_24,1,0x30);
  uVar6 = DAT_002e9758;
  local_24 = uVar1;
  local_20 = uVar2;
  if (piVar3[1] == 0) {
    local_2c = uVar4;
  }
  else {
    local_2c = uVar1;
  }
  local_28 = DAT_002e9758;
  FUN_002fc40c(*(undefined4 *)(iVar5 + 8),&local_2c,&local_24,1,0x37);
  local_24 = DAT_002e975c;
  local_20 = uVar2;
  if (piVar3[2] == 0) {
    local_2c = uVar4;
    local_28 = DAT_002e9764;
  }
  else {
    local_2c = DAT_002e9760;
    local_28 = uVar6;
  }
  FUN_002fc40c(*(undefined4 *)(iVar5 + 8),&local_2c,&local_24,1,0x3e);
  return;
}
