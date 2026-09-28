// OoT3D decomp @ 00258ed0  name=FUN_00258ed0  size=316

void FUN_00258ed0(int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;

  iVar4 = func_0x00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x1d2));
  uVar6 = uRam0025937c;
  if (iVar4 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1d2);
  *(undefined4 *)(param_1 + 0x140) = uVar6;
  *(undefined2 *)(param_1 + 0x1c8) = 0;
  uVar6 = uRam00259384;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(iRam00259380 + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  param_2 = param_2 + 0x10;
  iVar8 = 0;
  iVar4 = 0;
  bVar2 = false;
  switch(*(undefined2 *)(param_1 + 0x1c2)) {
  case 2:
    goto code_r0x002590b4;
  case 3:
  case 8:
    *(undefined2 *)(param_1 + 0x1c6) = 0x1f;
    iVar8 = func_0x00358ef8(param_2,0);
    uVar6 = uRam00259384;
    *(undefined4 *)(param_1 + 0x1b4) = uRam00259384;
    *(undefined4 *)(param_1 + 0x1b8) = uVar6;
    *(undefined2 *)(param_1 + 0x1ca) = 0x62;
    *(undefined2 *)(param_1 + 0x1ce) = 0x35;
    uVar6 = uRam0025938c;
    if (*(short *)(param_1 + 0x1c2) != 3) {
      *(undefined4 *)(param_1 + 0xc4) = uRam002593a4;
      break;
    }
    goto code_r0x00259140;
  case 4:
  case 9:
    *(undefined2 *)(param_1 + 0x1c6) = 0x70;
    iVar8 = func_0x00358ef8(param_2,0);
    uVar6 = uRam00259384;
    *(undefined4 *)(param_1 + 0x1b4) = uRam00259384;
    *(undefined4 *)(param_1 + 0x1b8) = uVar6;
    *(undefined2 *)(param_1 + 0x1ca) = 0x62;
    *(undefined2 *)(param_1 + 0x1ce) = 0x35;
    uVar6 = uRam0025938c;
    if (*(short *)(param_1 + 0x1c2) == 4) goto code_r0x00259140;
    *(undefined4 *)(param_1 + 0xc4) = uRam002593a8;
    break;
  case 5:
  case 0x19:
    bVar2 = true;
  case 0:
  case 0x14:
    if (*(short *)(param_1 + 0x1c2) == 0 || *(short *)(param_1 + 0x1c2) == 5) {
      *(undefined2 *)(param_1 + 0x1c6) = 0x18;
      iVar8 = func_0x00358ef8(param_2,1);
    }
    else {
      *(undefined2 *)(param_1 + 0x1c6) = 0x19;
      iVar8 = func_0x00358ef8(param_2,2);
    }
    *(undefined4 *)(param_1 + 0x1b4) = uRam00259384;
    *(undefined2 *)(param_1 + 0x1ca) = 0x62;
    *(undefined2 *)(param_1 + 0x1ce) = 0x35;
    uVar6 = uRam0025938c;
    if (bVar2) {
      *(undefined4 *)(param_1 + 0xc4) = uRam00259388;
    }
    else {
code_r0x00259140:
      uVar6 = uRam002593a0;
    }
    break;
  case 6:
    bVar2 = true;
  case 1:
    iVar8 = func_0x00358ef8(param_2,1);
    *(undefined4 *)(param_1 + 0x1b4) = uRam00259384;
    *(undefined2 *)(param_1 + 0x1ca) = 0x62;
    *(undefined2 *)(param_1 + 0x1ce) = 0x35;
    uVar6 = uRam0025938c;
    if (bVar2) {
      *(undefined4 *)(param_1 + 0xc4) = uRam00259390;
    }
    else {
      FUN_0037547c(uRam0025939c,0,4,uRam00259398,uRam00259398,uRam00259394);
      uVar6 = uRam002593a0;
    }
    break;
  case 7:
    bVar2 = true;
code_r0x002590b4:
    *(undefined2 *)(param_1 + 0x1c6) = 0x27;
    iVar8 = func_0x00358ef8(param_2,0);
    *(undefined4 *)(param_1 + 0x1b4) = uRam00259384;
    *(undefined2 *)(param_1 + 0x1ca) = 0x62;
    *(undefined2 *)(param_1 + 0x1ce) = 0x35;
    uVar6 = uRam0025938c;
    if (bVar2) break;
    goto code_r0x00259140;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    *(undefined4 *)(param_1 + 0x1b4) = uRam00259384;
    *(undefined4 *)(param_1 + 0x1b8) = uVar6;
    uVar6 = uRam002593a4;
    *(undefined2 *)(param_1 + 0x1ca) = 0xb;
    *(undefined4 *)(param_1 + 100) = uVar6;
    sVar1 = *(short *)(param_1 + 0x1c2);
    if (sVar1 == 10) {
      uVar3 = 0x6c;
code_r0x002591e8:
      *(undefined2 *)(param_1 + 0x1c6) = uVar3;
    }
    else {
      if (sVar1 == 0xb) {
        uVar3 = 0x6d;
        goto code_r0x002591e8;
      }
      if (sVar1 == 0xc) {
        uVar3 = 0x6e;
        goto code_r0x002591e8;
      }
      if (sVar1 == 0xe) {
        uVar3 = 0x70;
        goto code_r0x002591e8;
      }
    }
    iVar8 = func_0x00358ef8(param_2,0);
    uVar6 = uRam002593ac;
    break;
  default:
    goto LAB_002592d0;
  case 0x10:
    *(undefined4 *)(param_1 + 0x1b4) = uRam002593b0;
    iVar8 = func_0x00358ef8(param_2,0);
    iVar4 = func_0x00372f0c(param_2,0);
    uVar6 = uRam002593b4;
    break;
  case 0x11:
    *(undefined4 *)(param_1 + 0x1b4) = uRam002593b0;
    iVar8 = func_0x00358ef8(param_2,1);
    iVar4 = func_0x00372f0c(param_2,1);
    uVar6 = uRam002593b4;
    break;
  case 0x12:
    *(undefined4 *)(param_1 + 0x1b4) = uRam002593b0;
    iVar8 = func_0x00358ef8(param_2,2);
    iVar4 = func_0x00372f0c(param_2,2);
    *(undefined4 *)(param_1 + 0x1a4) = uRam002593b4;
    goto LAB_002592d0;
  case 0x13:
    *(undefined2 *)(param_1 + 0x1c6) = 0x6b;
    iVar8 = func_0x00358ef8(param_2,0);
    *(undefined4 *)(param_1 + 0x1b4) = uRam002593b8;
    *(undefined2 *)(param_1 + 0x1ca) = 0x78;
    *(undefined2 *)(param_1 + 0x1ce) = 0x35;
    uVar6 = uRam002593bc;
  }
  *(undefined4 *)(param_1 + 0x1a4) = uVar6;
LAB_002592d0:
  if (iVar8 != 0) {
    if (((*puRam002593c0 & 1) == 0) && (iVar5 = func_0x003679b4(puRam002593c0), iVar5 != 0)) {
      func_0x0036788c(iRam002593c4);
    }
    piVar7 = *(int **)(iRam002593c4 + 0x17c);
    piVar7[2] = *(int *)(param_1 + 0x178);
    uVar6 = (**(code **)(*piVar7 + 8))(piVar7,iVar8,1);
    *(undefined4 *)(param_1 + 0x1bc) = uVar6;
    piVar7[2] = 0;
    if (iVar4 != 0) {
      iVar8 = *(int *)(*(int *)(param_1 + 0x1bc) + 0xc);
      func_0x00372d94(iVar8,iVar4);
      *(undefined1 *)(iVar8 + 0x10) = 1;
    }
  }
  return;
}
