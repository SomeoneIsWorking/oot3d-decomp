// OoT3D decomp @ 0031ff64  name=FUN_0031ff64  size=1172

undefined4 FUN_0031ff64(int *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;

  iVar4 = *param_1;
  iVar8 = *(int *)(iVar4 + 0x30) + iVar4;
  iVar8 = *(int *)(*(int *)(iVar4 + 0x2c) + iVar4 + 8) * 0x14 +
          *(int *)(*(int *)(iVar4 + 0x28) + iVar4 + 8) * 0x1cc +
          *(int *)(iVar8 + *(int *)(iVar8 + 8) + 8) * 0xc +
          *(int *)(iVar4 + *(int *)(iVar4 + 0x34) + 8) * 0x804 + 0xa8;
  iVar4 = (**(code **)(*(int *)*puRam00320388 + 0xc))((int *)*puRam00320388,iVar8,0x32038c,0x89);
  param_1[0x10] = iVar4;
  param_1[0xf] = iVar8;
  param_1[0x11] = iVar4;
  piVar5 = (int *)func_0x004c39c0(param_1);
  uVar1 = uRam003203cc;
  if (param_2 != 0) {
    piVar5 = (int *)param_1[0xe];
  }
  iVar4 = param_1[3];
  uVar12 = 0;
  if (param_2 != 0 && piVar5 != (int *)0x0) {
    uVar12 = (**(code **)(*piVar5 + 8))(piVar5,uRam003203cc,*(undefined4 *)(iVar4 + 4));
  }
  uVar13 = *(undefined4 *)(iVar4 + 4);
  uVar10 = *(undefined4 *)(iVar4 + 8);
  func_0x002c1678(1,param_1 + 7);
  uVar2 = uRam003203d0;
  func_0x002d15d8(uRam003203d0,param_1[7]);
  func_0x002c150c(uVar12 | uVar2,uVar13,uVar10,uVar2 + 0x52);
  func_0x0030e604(100000,0);
  piVar5 = (int *)func_0x002c14a8(uVar2,uRam003203d4,param_1 + 0xb);
  if (param_2 != 0) {
    piVar5 = (int *)param_1[0xe];
  }
  uVar12 = 0;
  if (param_2 != 0 && piVar5 != (int *)0x0) {
    uVar12 = (**(code **)(*piVar5 + 0xc))(piVar5,uVar1,*(int *)(*param_1 + 0x20) << 1);
  }
  func_0x002c1678(1,param_1 + 8);
  uVar3 = uRam003203d8;
  func_0x002d15d8(uRam003203d8,param_1[8]);
  iVar4 = *param_1;
  func_0x002c150c(uVar12 | uVar3,*(int *)(iVar4 + 0x20) << 1,iVar4 + *(int *)(iVar4 + 0x3c),
                  uVar2 + 0x52);
  func_0x0030e604(100000,0);
  func_0x002c14a8(uVar3,uRam003203d4,param_1 + 0xc);
  iVar4 = *(int *)(*param_1 + *(int *)(*param_1 + 0x2c) + 8);
  if (0 < iVar4) {
    iVar8 = param_1[0x11] + iVar4 * 4;
    param_1[10] = iVar8;
    puVar6 = (undefined4 *)(iVar4 * 4 + iVar8);
    param_1[9] = param_1[0x11];
    param_1[0x11] = (int)(puVar6 + iVar4 * 3);
    iVar8 = 0;
    puVar7 = puVar6;
    do {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 3;
    } while (iVar8 < iVar4);
    param_1[5] = (int)puVar6;
    func_0x002deb7c(iVar4,param_1[9]);
    uVar1 = uRam003203dc;
    iVar8 = 0;
    if (0 < iVar4) {
      do {
        uVar12 = 0;
        piVar5 = (int *)(*param_1 + *(int *)(*param_1 + 0x2c) + 0xc);
        piVar11 = piVar5 + iVar8 * 9;
        if (param_2 != 0) {
          piVar5 = (int *)param_1[0xe];
        }
        if (param_2 != 0 && piVar5 != (int *)0x0) {
          uVar12 = (**(code **)(*piVar5 + 0x10))(piVar5,uRam003203e0,*piVar11);
        }
        func_0x002fb074(uVar1,*(undefined4 *)(param_1[9] + iVar8 * 4));
        if (*(char *)((int)piVar11 + 6) == '\0') {
          if (piVar11 == (int *)0x0) {
            iVar9 = 0;
          }
          else {
            iVar9 = piVar11[4] + *param_1 + *(int *)(*param_1 + 0x40);
          }
          func_0x002de990(uVar12 | 0xde1,-(int)(short)piVar11[1],(short)piVar11[3],
                          (int)(short)piVar11[2],(int)*(short *)((int)piVar11 + 10),0,
                          (short)piVar11[3],*(undefined2 *)((int)piVar11 + 0xe),iVar9);
        }
        else {
          if (piVar11 == (int *)0x0) {
            iVar9 = 0;
          }
          else {
            iVar9 = piVar11[4] + *param_1 + *(int *)(*param_1 + 0x40);
          }
          func_0x002d2ba8(uVar12 | 0xde1,-(int)(short)piVar11[1],(short)piVar11[3],
                          (int)(short)piVar11[2],(int)*(short *)((int)piVar11 + 10),0,*piVar11,iVar9
                         );
        }
        func_0x002fb074(uVar1,*(undefined4 *)(param_1[9] + iVar8 * 4));
        func_0x002de76c(uVar1,uRam003203e4,param_1[10] + iVar8 * 4);
        puVar7 = (undefined4 *)(param_1[5] + iVar8 * 0xc);
        uVar10 = *(undefined4 *)(param_1[10] + iVar8 * 4);
        puVar7[1] = *(undefined4 *)(param_1[9] + iVar8 * 4);
        puVar7[2] = uVar10;
        *puVar7 = piVar11;
        func_0x0030e604(100000,0);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar4);
    }
  }
  puVar7 = (undefined4 *)param_1[0x11];
  iVar4 = *param_1;
  param_1[0x11] = (int)(puVar7 + 5);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
  }
  param_1[2] = (int)puVar7;
  puVar7[2] = param_1[9];
  FUN_004c34ac(param_1[2],*(int *)(iVar4 + 0x28) + *param_1,param_1 + 0xf);
  puVar7 = (undefined4 *)param_1[0x11];
  param_1[0x11] = (int)(puVar7 + 5);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
  }
  param_1[1] = (int)puVar7;
  func_0x004c3668(puVar7,*param_1 + *(int *)(iVar4 + 0x30),param_1,param_1 + 0xf);
  puVar7 = (undefined4 *)param_1[0x11];
  param_1[0x11] = (int)(puVar7 + 4);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
  }
  param_1[4] = (int)puVar7;
  func_0x004c382c(puVar7,*param_1 + *(int *)(iVar4 + 0x34),param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xd) = 1;
  return 0;
}
