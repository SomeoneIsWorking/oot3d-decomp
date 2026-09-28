// OoT3D decomp @ 00425300  name=FUN_00425300  size=1448

void FUN_00425300(undefined4 *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  undefined4 *apuStack_26c [92];
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float afStack_cc [6];
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;

  cVar1 = *(char *)((int)param_1 + 0x11d);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      func_0x0043bc10(param_1);
    }
    else if ((cVar1 == '\x02') && (cVar1 = *(char *)((int)param_1 + 0x11b), cVar1 != -0x74)) {
      if (cVar1 == *(char *)((int)param_1 + 0x11a)) {
        *(undefined1 *)((int)param_1 + 0x11b) = 0x8c;
      }
      else {
        *(char *)(param_1 + 0x47) = *(char *)((int)param_1 + 0x11a);
        *(char *)((int)param_1 + 0x11a) = cVar1;
        *(undefined1 *)((int)param_1 + 0x11b) = 0x8c;
        iVar8 = func_0x002f748c(cVar1);
        func_0x00324f44(apuStack_26c,iRam00425814 + iVar8 * 0x44,uRam00425818);
        uVar9 = func_0x00301300(apuStack_26c,0,0);
        *param_1 = uVar9;
        *(undefined1 *)((int)param_1 + 0x11d) = 1;
      }
    }
    iVar8 = param_1[0x41];
    if (-1 < iVar8) {
      if (iVar8 < 1) {
        iVar8 = 0;
        do {
          if ((int *)param_1[iVar8 + 0x42] != (int *)0x0) {
            (**(code **)(*(int *)param_1[iVar8 + 0x42] + 4))();
          }
          iVar11 = iVar8 + 1;
          param_1[iVar8 + 0x42] = 0;
          iVar8 = iVar11;
        } while (iVar11 < 2);
        uVar10 = (int)*(char *)(param_1 + 6) ^ 1;
        if (*(char *)((int)param_1 + uVar10 + 0x19) != '\0') {
          func_0x002f70c4(param_1 + uVar10 * 0x1c + 7);
          *(undefined1 *)((int)param_1 + uVar10 + 0x19) = 0;
        }
        func_0x0034fc6c(param_1[0x44]);
        iVar8 = -1;
        param_1[0x44] = 0;
      }
      else {
        iVar8 = iVar8 + -1;
      }
      param_1[0x41] = iVar8;
    }
    if (param_1[0x45] != 0) {
      fStack_70 = *pfRam0042581c;
      fStack_6c = pfRam0042581c[1];
      fStack_68 = pfRam0042581c[2];
      fStack_64 = pfRam0042581c[3];
      fStack_80 = pfRam0042581c[4];
      fStack_7c = pfRam0042581c[5];
      fStack_78 = pfRam0042581c[6];
      fStack_74 = pfRam0042581c[7];
      fStack_90 = pfRam0042581c[8];
      fStack_8c = pfRam0042581c[9];
      fStack_88 = pfRam0042581c[10];
      fStack_84 = pfRam0042581c[0xb];
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      fStack_ac = fRam00425820;
      fStack_a8 = fRam00425820;
      fStack_a4 = fRam00425820;
      apuStack_26c[0] = &uStack_a0;
      func_0x0033d174(param_1[0x45],0,&fStack_80,&fStack_70,&fStack_90);
      func_0x0033d14c(param_1[0x45],0,&fStack_ac);
      func_0x0033d200(param_1[0x45],0);
      fStack_70 = fStack_70 * fRam00425824;
      fStack_6c = fStack_6c * fRam00425824;
      fStack_68 = fStack_68 * fRam00425824;
      fStack_80 = fStack_80 * fRam00425824;
      fStack_7c = fStack_7c * fRam00425824;
      fStack_78 = fStack_78 * fRam00425824;
      fStack_ac = -fStack_ac;
      fStack_a8 = -fStack_a8;
      apuStack_26c[0] = &uStack_a0;
      func_0x0033d174(param_1[0x45],1,&fStack_80,&fStack_70,&fStack_90);
      func_0x0033d14c(param_1[0x45],1,&fStack_ac);
      func_0x0033d200(param_1[0x45],1);
    }
    iVar8 = 0;
    if ((*(char *)((int)param_1 + 0x11b) == -0x74) &&
       (*(char *)((int)param_1 + 0x11a) == 'b' || *(char *)((int)param_1 + 0x11a) == 't')) {
      iVar8 = 1;
    }
    if ((*(char *)(param_1 + 0x47) == 'b' || *(char *)(param_1 + 0x47) == 't') &&
       (iVar8 = 1, *(char *)((int)param_1 + 0x11d) == '\x02')) {
      *(undefined1 *)(param_1 + 0x47) = 0x8c;
    }
    fVar6 = fRam0042583c;
    fVar5 = fRam00425838;
    fVar4 = fRam00425834;
    uVar9 = uRam00425830;
    fVar3 = fRam0042582c;
    fVar2 = fRam00425828;
    uVar10 = 0;
    uStack_50 = uRam00425840;
    do {
      fVar7 = fRam00425844;
      if (param_1[uVar10 + 0x3f] != 0) {
        uStack_9c = 0x3f800000;
        uStack_98 = 0;
        uStack_94 = 0;
        fStack_90 = (float)param_1[2];
        fStack_88 = 1.0;
        fStack_8c = 0.0;
        fStack_84 = 0.0;
        fStack_80 = (float)param_1[3];
        fStack_7c = 0.0;
        fStack_74 = 1.0;
        fStack_78 = 0.0;
        fStack_70 = (float)param_1[4];
        if ((iVar8 - 1U & uVar10) == 0) {
          func_0x0036c258(uVar9,&fStack_54,&fStack_58);
          fVar12 = fVar2 - fStack_58;
          fStack_fc = fStack_58 + fVar12 * fVar2;
          fStack_e8 = fStack_58 + fVar12 * fVar7;
          fStack_f8 = fVar12 * fVar2 * fVar7;
          fStack_e4 = fVar12 * fVar7 * fVar7;
          fStack_f4 = fStack_f8 + fStack_54 * fVar7;
          fStack_f8 = fStack_f8 - fStack_54 * fVar7;
          fStack_d8 = fStack_e4 + fStack_54 * fVar2;
          fStack_e4 = fStack_e4 - fStack_54 * fVar2;
          fStack_f0 = fVar7;
          fStack_e0 = fVar7;
          fStack_d0 = fVar7;
          fStack_ec = fStack_f4;
          fStack_dc = fStack_f8;
          fStack_d4 = fStack_e8;
          func_0x0036c174(&uStack_9c,&uStack_9c,&fStack_fc);
          fVar12 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x46),
                                              (byte)(in_fpscr >> 0x15) & 3);
          func_0x0036c258(fVar12 * fVar5 * fVar6 * fVar3 * fVar4 * fVar3,&fStack_5c,&fStack_60);
          fVar12 = fVar2 - fStack_60;
          fStack_fc = fStack_60 + fVar12 * fVar7;
          fStack_e8 = fStack_60 + fVar12 * fVar2;
          fStack_f8 = fVar12 * fVar7 * fVar2;
          fStack_f4 = fVar12 * fVar7 * fVar7;
          fStack_e4 = fVar12 * fVar2 * fVar7;
          fStack_ec = fStack_f8 + fStack_5c * fVar7;
          fStack_dc = fStack_f4 - fStack_5c * fVar2;
          fStack_d8 = fStack_e4 + fStack_5c * fVar7;
          fStack_f8 = fStack_f8 - fStack_5c * fVar7;
          fStack_f4 = fStack_f4 + fStack_5c * fVar2;
          fStack_e4 = fStack_e4 - fStack_5c * fVar7;
          fStack_f0 = fVar7;
          fStack_e0 = fVar7;
          fStack_d0 = fVar7;
          fStack_d4 = fStack_fc;
          func_0x0036c174(&uStack_9c,&uStack_9c,&fStack_fc);
        }
        afStack_cc[0] = (float)param_1[5];
        afStack_cc[1] = 0.0;
        uStack_b4 = 0;
        afStack_cc[2] = 0.0;
        afStack_cc[3] = 0.0;
        afStack_cc[4] = 0.0;
        uStack_b0 = 0;
        fStack_ac = 0.0;
        fStack_a8 = 0.0;
        uStack_a0 = 0;
        afStack_cc[5] = afStack_cc[0];
        fStack_a4 = afStack_cc[0];
        fStack_6c = afStack_cc[0];
        fStack_68 = afStack_cc[0];
        fStack_64 = afStack_cc[0];
        func_0x0036c174(&uStack_9c,&uStack_9c,afStack_cc);
        FUN_003721e0(param_1[uVar10 + 0x3f],&uStack_9c);
        *(undefined1 *)(param_1[uVar10 + 0x3f] + 0xac) = 1;
        if (((*puRam004258dc & 1) == 0) && (iVar11 = func_0x003679b4(puRam004258dc), iVar11 != 0)) {
          func_0x0036788c(uRam004258e0);
        }
        FUN_0033d220(uStack_50,param_1[uVar10 + 0x3f]);
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 2);
    *(short *)(param_1 + 0x46) = *(short *)(param_1 + 0x46) + 1;
  }
  return;
}
