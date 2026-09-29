// OoT3D decomp @ 0041bb70  name=FUN_0041bb70  size=284

void FUN_0041bb70(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int local_20;
  undefined1 auStack_1c [4];
  undefined4 local_18;

  puVar1 = DAT_0041bc8c;
  do {
    local_18 = *DAT_0041bc90;
    uVar2 = FUN_0030dbd4(auStack_1c,&local_18,1,0,0xffffffff,0xffffffff);
    if ((uVar2 & 0x80000000) == 0) {
      uVar2 = uVar2 >> 0x1b;
    }
    else {
      uVar2 = (uVar2 >> 0x1b) - 0x20;
    }
    if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
      FUN_003351b4();
    }
    iVar3 = FUN_00423578(&local_20);
    if (-1 < iVar3) {
      piVar7 = (int *)*puVar1;
      piVar4 = piVar7;
      if (piVar7 != (int *)0x0) {
        piVar4 = piVar7 + -1;
      }
      while ((piVar4 != (int *)0x0 && (piVar4[3] != local_20))) {
        piVar6 = piVar4;
        if (piVar4 != (int *)0x0) {
          piVar6 = piVar4 + 1;
        }
        piVar5 = (int *)0x0;
        if ((piVar7 != (int *)0x0) && (piVar5 = (int *)*piVar7, piVar5 != (int *)0x0)) {
          piVar5 = piVar5 + -1;
        }
        if (piVar5 == piVar4) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar4 != (int *)0x0) {
            piVar4 = piVar4 + -1;
          }
        }
      }
      if (piVar4 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        (**(code **)*piVar4)();
        iVar3 = 0;
      }
    }
    if (iVar3 < 0) {
      FUN_0030e3ac(iVar3,&DAT_0041bc94,0,&DAT_0041bc94);
      FUN_002fb928(0);
    }
  } while( true );
}
