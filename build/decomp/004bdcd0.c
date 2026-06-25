// OoT3D decomp @ 004bdcd0  name=FUN_004bdcd0  size=332

undefined4 * FUN_004bdcd0(undefined4 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  cVar1 = *(char *)(*param_2 + 4);
  piVar2 = *DAT_004bde1c;
  if (cVar1 == '\x01') {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(piVar2,8,DAT_004bde20,0x9e);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = *param_2;
      *puVar3 = DAT_004bde24;
    }
  }
  else if (cVar1 == '\x05') {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(piVar2,8,DAT_004bde20,0xa2);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = *param_2;
      *puVar3 = DAT_004bde28;
      return puVar3;
    }
  }
  else if (cVar1 == '\x03') {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(piVar2,8,DAT_004bde20,0xa6);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = *param_2;
      *puVar3 = DAT_004bde2c;
      return puVar3;
    }
  }
  else if (cVar1 == '\x04') {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(piVar2,8,DAT_004bde20,0xaa);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = *param_2;
      *puVar3 = DAT_004bde30;
      return puVar3;
    }
  }
  else {
    if (cVar1 != '\x02') {
      return (undefined4 *)0x0;
    }
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(piVar2,8,DAT_004bde20,0xae);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = *param_2;
      *puVar3 = DAT_004bde34;
      return puVar3;
    }
  }
  return puVar3;
}

