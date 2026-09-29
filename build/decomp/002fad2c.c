// OoT3D decomp @ 002fad2c  name=FUN_002fad2c  size=212

void FUN_002fad2c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int extraout_r1;
  int iVar3;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;

  iVar4 = 0;
  iVar3 = param_2;
  if (0 < param_3) {
    do {
      puVar2 = (undefined4 *)(param_2 + iVar4 * 8);
      piVar5 = (int *)*puVar2;
      if (piVar5 != (int *)0x0) {
        cVar1 = *(char *)(puVar2 + 1);
        if (cVar1 == '\0') {
          if (*(char *)((int)piVar5 + 0xad) != '\0') {
            if (param_4 == 0) {
              FUN_0030f4d0(piVar5[5],1);
              iVar3 = extraout_r1_01;
            }
            else {
              uVar6 = FUN_003687a8(piVar5,iVar3);
              iVar3 = (int)((ulonglong)uVar6 >> 0x20);
              if (*(char *)((int)uVar6 + 0x1b4) != '\0') {
                FUN_0030f4d0(piVar5[6]);
                iVar3 = extraout_r1_00;
              }
            }
          }
        }
        else if ((cVar1 == '\x01' && param_4 == 0) && (piVar5[0x5c] != 0)) {
          uVar6 = FUN_002ea854(piVar5);
          iVar3 = (int)((ulonglong)uVar6 >> 0x20);
          if ((int)uVar6 == 0) {
            (**(code **)(*piVar5 + 0xc))(piVar5);
            iVar3 = extraout_r1;
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_3);
  }
  return;
}
