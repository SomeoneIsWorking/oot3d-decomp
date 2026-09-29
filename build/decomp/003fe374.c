// OoT3D decomp @ 003fe374  name=FUN_003fe374  size=216

void FUN_003fe374(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;

  iVar5 = 0;
  if (0 < param_3) {
    do {
      piVar4 = (int *)(param_2 + iVar5 * 8);
      piVar2 = (int *)*piVar4;
      if (piVar2 != (int *)0x0) {
        cVar1 = (char)piVar4[1];
        if (cVar1 == '\0') {
          if (*(char *)((int)piVar2 + 0xad) != '\0') {
            if (param_4 == 0) {
              iVar3 = piVar2[5];
              FUN_0030f4d0(iVar3,0);
              FUN_0030f4d0(iVar3,1);
            }
            else {
              iVar3 = FUN_003687a8(piVar2);
              if (*(char *)(iVar3 + 0x1b4) != '\0') {
                iVar3 = piVar2[6];
                FUN_0030f4d0(iVar3,0);
                FUN_0030f4d0(iVar3,1);
              }
            }
          }
        }
        else if ((cVar1 == '\x01' && param_4 == 0) && (piVar2[0x5c] != 0)) {
          (**(code **)(*piVar2 + 0xc))();
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_3);
  }
  return;
}
