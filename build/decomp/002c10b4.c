// OoT3D decomp @ 002c10b4  name=FUN_002c10b4  size=516

undefined4 FUN_002c10b4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;

  puVar1 = DAT_002c12c4;
  pcVar6 = (code *)*DAT_002c12c4;
  puVar3 = param_1;
  if (pcVar6 != (code *)0x0) {
    puVar3 = (undefined4 *)DAT_002c12c4[1];
  }
  if (pcVar6 == (code *)0x0 || puVar3 == (undefined4 *)0x0) {
    return 0x12;
  }
  puVar3 = (undefined4 *)(*pcVar6)(8);
  if (puVar3 == (undefined4 *)0x0) {
    return 9;
  }
  puVar4 = (undefined4 *)(*(code *)*puVar1)(4);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = DAT_002c12c8;
  }
  *puVar3 = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    iVar5 = (*(code *)*puVar1)(0x78);
    puVar4 = (undefined4 *)0x0;
    if (iVar5 != 0) {
      puVar4 = (undefined4 *)FUN_004a1728(iVar5,*puVar3);
      uVar2 = DAT_002c12d0;
      *puVar4 = DAT_002c12cc;
      puVar4[0x1b] = uVar2;
    }
    puVar3[1] = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[0x1d] = param_2;
      *(undefined4 *)(puVar3[1] + 0x70) = param_3;
      iVar5 = FUN_004a1630(puVar3[1],puVar3[1] + 0x6c);
      if (iVar5 == 0) {
        *param_1 = puVar3;
        return 0;
      }
      (**(code **)(*(int *)puVar3[1] + 0xc))();
      (*(code *)puVar1[1])(puVar3[1]);
      (*(code *)puVar1[1])(*puVar3);
      (*(code *)puVar1[1])(puVar3);
      if (iVar5 == 0x46) {
        return 0xc;
      }
      if (iVar5 < 0x47) {
        if (iVar5 != 0x41) {
          if (0x41 < iVar5) {
            if (iVar5 == 0x42) {
              return 5;
            }
            if (iVar5 != 0x43) {
              if (iVar5 == 0x44) {
                return 9;
              }
              if (iVar5 != 0x45) {
                return 4;
              }
            }
switchD_002c1260_caseD_49:
            return 6;
          }
          if (iVar5 == 2) {
            return 0x10;
          }
          if (iVar5 < 3) {
            if (iVar5 == 0) {
              return 0;
            }
            if (iVar5 == 1) {
              return 3;
            }
          }
          else {
            if (iVar5 == 3) {
              return 0x11;
            }
            if (iVar5 == 0x40) {
              return 1;
            }
          }
        }
      }
      else if (iVar5 < 0x4c) {
        switch(iVar5) {
        case 0x47:
          return 0xe;
        case 0x48:
          return 0xf;
        case 0x49:
          goto switchD_002c1260_caseD_49;
        }
      }
      return 4;
    }
    (*(code *)puVar1[1])(*puVar3);
  }
  (*(code *)puVar1[1])(puVar3);
  return 9;
}
